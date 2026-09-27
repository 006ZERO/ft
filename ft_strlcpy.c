

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
  size_t i;
  size_t j;
  unsigned char *d;
  const unsigned char *s;

  d = (unsigned char *)dst;
  s = (const unsigned char *)src;
  i = 0;
  j = ft_strlen(src);
  if (size == 0) {
    return (j);
  }
  while (s[i] && i < size - 1) {
    d[i] = s[i];
    i++;
  }
  d[i] = '\0';
  return (j);
}
