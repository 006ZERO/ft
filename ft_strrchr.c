

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
  int i;

  i = ft_strlen(s);
  while (1) {
    if (s[i] == (char)c)
      return ((char *)(s + i));
    if (i == 0)
      break;
    i--;
  }
  return (NULL);
}
