

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
  const unsigned char *s;
  unsigned char *d;
  size_t i;

  if (dest == NULL && src == NULL)
    return (NULL);
  d = (unsigned char *)dest;
  s = (const unsigned char *)src;
  i = 0;
  while (i < n) {
    d[i] = s[i];
    i++;
  }
  return (dest);
}
