*This activity has been created as part of the 42 curriculum by ndwairi.*

# Description

Libft is a project from the 42 curriculum. The goal is to create a personal C library containing reimplemented standard C library functions and additional utility functions.

This project helps develop a better understanding of C programming, including pointers, strings, memory management, dynamic allocation, and linked lists.

The created library can be reused in future 42 projects.

## Instructions

To compile the mandatory part of the library, run:

```bash
make
```

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To clean and rebuild the project:

```bash
make re
```

The compilation generates the static library:

```text
libft.a
```

## Resources

* 42 Libft project subject
* C standard library documentation
* Unix manual pages
* W3Schools C documentation

### AI Usage

AI was used as a learning and support tool during the project.
It was mainly used to clarify C concepts, understand errors, and review edge cases.
It also helped with understanding memory management, pointers, and the behaviour of some functions.
AI was not used to replace the understanding or implementation of the project.

## Detailed Library Description

The library is divided into three  mandatory parts:

### Part 1 - Libc Functions

This part contains reimplementations of standard C library functions using the `ft_` prefix.

Functions include:

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

### Part 2 - Additional Functions

This part contains functions for memory manipulation, string manipulation, character searching, number conversion, and dynamic memory allocation.

Functions include:

* `ft_strlen`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_memchr`
* `ft_memcmp`
* `ft_strnstr`
* `ft_atoi`
* `ft_calloc`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`

### Part-3 Linked List 

The Linked List  part contains functions for managing linked lists using the `t_list` structure.

Functions include:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`
