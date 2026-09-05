#include "libft.h"

static size_t bounded_strlen(const char *s, size_t size) {
  size_t i;

  i = 0;
  while (i < size && s[i])
    i++;
  return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size) {
  size_t dst_len;
  size_t src_len;
  size_t i;

  dst_len = bounded_strlen(dst, size);
  src_len = ft_strlen(src);
  if (dst_len == size)
    return (size + src_len);
  i = 0;
  while (src[i] && dst_len + i < size - 1) {
    dst[dst_len + i] = src[i];
    i++;
  }
  dst[dst_len + i] = '\0';
  return (dst_len + src_len);
}
