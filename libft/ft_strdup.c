

#include "libft.h"

char *ft_strdup(const char *s) {
  size_t len;
  size_t i;
  char *p;

  i = 0;
  len = ft_strlen(s);
  p = malloc(len + 1);
  if (!p)
    return (NULL);
  while (s[i]) {
    p[i] = s[i];
    i++;
  }
  p[i] = '\0';
  return (p);
}
