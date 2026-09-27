

#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
  long s;
  char c;

  s = n;
  if (s < 0) {
    s = -s;
    write(fd, "-", 1);
  }
  if (s > 9) {
    ft_putnbr_fd((s / 10), fd);
  }
  c = (s % 10) + '0';
  write(fd, &c, 1);
}
