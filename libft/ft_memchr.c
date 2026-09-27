

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  const unsigned char *ss;
  unsigned char cc;
  size_t i;

  ss = (unsigned char *)s;
  cc = (unsigned char)c;
  i = 0;
  while (i < n) {
    if (ss[i] == cc)
      return ((void *)&ss[i]);
    i++;
  }
  return (0);
}
