

#include "libft.h"

void ft_putendl_fd(char *s, int fd) {
  size_t count;

  count = ft_strlen(s);
  write(fd, s, count);
  write(fd, "\n", 1);
}
