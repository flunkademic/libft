# libft

A custom implementation of common C standard library functions.

This project is part of the 42 curriculum. I reimplemented functions from the C standard library to get a better understanding of pointers, memory management, and low-level programming.

## What’s in it
- String functions (`ft_strlen`, `ft_strcpy`, `ft_strdup`, etc.)
- Memory functions (`ft_memset`, `ft_memcpy`, `ft_memmove`, etc.)
- Simple linked list utilities (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, etc.)

## How to use
This project includes a Makefile. Simply run:
```bash
make
```
This will compile all .c files and create libft.a.

Include libft.h and link with libft.a in your projects.


## Example:

```
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello!";
    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```
---

## Note

This code is for educational purposes only and should not be copied for assignments or projects elsewhere.
