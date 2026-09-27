

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
  const unsigned char *s;
  unsigned char *d;

  if (dest == src || n == 0)
    return (dest);
  if (!dest || !src)
    return (NULL);
  d = (unsigned char *)dest;
  s = (const unsigned char *)src;
  if (d < s) {
    while (n--)
      *d++ = *s++;
  } else {
    d += n;
    s += n;
    while (n--)
      *--d = *--s;
  }
  return (dest);
}
