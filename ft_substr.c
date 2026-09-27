

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
  size_t lensub;
  size_t i;
  size_t copylen;
  char *substr;

  lensub = ft_strlen(s);
  if (start >= lensub)
    copylen = 0;
  else if (len < lensub - start)
    copylen = len;
  else
    copylen = lensub - start;
  substr = malloc(copylen + 1);
  if (!substr)
    return (NULL);
  i = 0;
  while (i < copylen) {
    substr[i] = s[i + start];
    i++;
  }
  substr[i] = '\0';
  return (substr);
}
