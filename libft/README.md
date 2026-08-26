# Libft

## Description

Libft is a C library that reimplements a set of standard C library functions
under the `ft_` prefix (Part 1), adds a set of custom utility functions that
are either missing from the standard library or exist in a different form
(Part 2), and implements a full set of functions to create and manipulate
singly linked lists using a custom `t_list` structure (Part 3).

The goal of this project is to build, from scratch, a personal toolbox of
reliable, well-tested C functions that will be reused throughout the rest
of the 42 curriculum.

## Instructions

### Compilation

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

### Usage

Include the header in your project and link against the compiled archive:

```c
#include "libft.h"
```

```bash
cc your_file.c -L. -lft -o your_program
```

## Library content

### Part 1 — Libc functions

Reimplementations of standard functions with identical prototypes and
behavior, prefixed with `ft_`:

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`,
`ft_atoi`, `ft_calloc`, `ft_strdup`.

### Part 2 — Additional functions

Utility functions not present in the standard library (or present in a
different form):

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
`ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`,
`ft_putendl_fd`, `ft_putnbr_fd`.

### Part 3 — Linked list

A singly linked list implementation based on the `t_list` structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Functions: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Resources

- The C library man pages (`man 3 <function_name>`) for each Part 1 function's
  exact prototype and behavior.
- The official 42 Libft subject (v1.2).

### AI usage

AI (Claude) was used as a learning and review tool throughout this project:
- To explain the required behavior of each libc function before implementing it.
- To review already-written implementations for correctness, edge cases
  (e.g. NULL handling, size_t underflow, calloc overflow protection) and
  compliance with the subject and the Norm.
- To help design the Makefile structure (PART1/PART2/PART3 variables, ar-based
  archive creation).
No code was copied without being manually understood and rewritten by hand
first; all functions were reasoned through individually before verification.
