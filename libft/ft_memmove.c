#include "libft.h"
#include <stdint.h>

void *ft_memmove(void *dst, const void *src, size_t n) {
  unsigned char *d;
  const unsigned char *s;

  d = (unsigned char *)dst;
  s = (const unsigned char *)src;
  if (d == NULL && s == NULL)
    return (NULL);
  if ((uintptr_t)d < (uintptr_t)s) {
    while (n--)
      *d++ = *s++;
  } else {
    while (n > 0) {
      n--;
      d[n] = s[n];
    }
  }
  return (dst);
}
