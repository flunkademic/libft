/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:08:17 by flunkademic       #+#    #+#             */
/*   Updated: 2025/09/30 23:15:01 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Bonus - Linked list structure */
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;


/* ************************************************************************** */
/* Part 1 - Libc-like functions                                               */
/* ************************************************************************** */

/* ft_isalpha | alphabetic check
 * Receives: int c
 * Returns: 1 if 'a'-'z' or 'A'-'Z', else 0
 * Edge cases: non-ASCII undefined
 * Manual: int isalpha(int c); | 42: int ft_isalpha(int c);
 */
int ft_isalpha(int c);

/* ft_isdigit | digit check
 * Receives: int c
 * Returns: 1 if '0'-'9', else 0
 * Edge cases: non-digit returns 0
 * Manual: int isdigit(int c); | 42: int ft_isdigit(int c);
 */
int ft_isdigit(int c);

/* ft_isalnum | alphanumeric check
 * Receives: int c
 * Returns: 1 if letter or digit, else 0
 * Edge cases: symbols/spaces return 0
 * Manual: int isalnum(int c); | 42: int ft_isalnum(int c);
 */
int ft_isalnum(int c);

/* ft_isascii | ASCII check
 * Receives: int c
 * Returns: 1 if 0 <= c <= 127, else 0
 * Edge cases: negative or >127 returns 0
 * Manual: int isascii(int c); | 42: int ft_isascii(int c);
 */
int ft_isascii(int c);

/* ft_isprint | printable character check
 * Receives: int c
 * Returns: 1 if printable (including space), else 0
 * Edge cases: control characters return 0
 * Manual: int isprint(int c); | 42: int ft_isprint(int c);
 */
int ft_isprint(int c);

/* ft_strlen | string length
 * Receives: char *str
 * Returns: number of characters excluding '\0'
 * Edge cases: empty string returns 0
 * Manual: size_t strlen(const char *s); | 42: int ft_strlen(char *str);
 */
int ft_strlen(char *str);

/* ft_memset | fill memory with constant byte
 * Receives: void *b, int c, size_t len
 * Returns: pointer to b
 * Edge cases: len=0 does nothing
 * Manual: void *memset(void *s, int c, size_t n); | 42: void *ft_memset(void *b, int c, size_t len);
 */
void *ft_memset(void *b, int c, size_t len);

/* ft_bzero | zero memory
 * Receives: void *s, size_t n
 * Returns: void
 * Edge cases: n=0 does nothing
 * Manual: void bzero(void *s, size_t n); | 42: void ft_bzero(void *s, size_t n);
 */
void ft_bzero(void *s, size_t n);

/* ft_memcpy | copy memory (non-overlapping)
 * Receives: void *dst, const void *src, size_t n
 * Returns: dst
 * Edge cases: overlapping memory -> undefined
 * Manual: void *memcpy(void *dest, const void *src, size_t n); | 42: void *ft_memcpy(void *dst, const void *src, size_t n);
 */
void *ft_memcpy(void *dst, const void *src, size_t n);

/* ft_memmove | copy memory (handles overlap)
 * Receives: void *dst, const void *src, size_t len
 * Returns: dst
 * Edge cases: dst==src -> nothing happens
 * Manual: void *memmove(void *dest, const void *src, size_t n); | 42: void *ft_memmove(void *dst, const void *src, size_t len);
 */
void *ft_memmove(void *dst, const void *src, size_t len);

/* ft_strlcpy | copy string with size limit
 * Receives: char *dst, const char *src, size_t dstsize
 * Returns: length of src
 * Edge cases: dstsize=0 -> returns src length
 * Manual: size_t strlcpy(char *dst, const char *src, size_t size); | 42: size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
 */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* ft_strlcat | concatenate string with size limit
 * Receives: char *dst, const char *src, size_t dstsize
 * Returns: initial length of dst + length of src
 * Edge cases: dstsize <= dst length -> returns dstsize + src length
 * Manual: size_t strlcat(char *dst, const char *src, size_t size); | 42: size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
 */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

/* ft_toupper | convert lowercase to uppercase
 * Receives: int c
 * Returns: uppercase if lowercase, else unchanged
 * Edge cases: non-letter returns unchanged
 * Manual: int toupper(int c); | 42: int ft_toupper(int c);
 */
int ft_toupper(int c);

/* ft_tolower | convert uppercase to lowercase
 * Receives: int c
 * Returns: lowercase if uppercase, else unchanged
 * Edge cases: non-letter returns unchanged
 * Manual: int tolower(int c); | 42: int ft_tolower(int c);
 */
int ft_tolower(int c);

/* ft_strchr | locate first occurrence of char
 * Receives: const char *s, int c
 * Returns: pointer to first occurrence or NULL
 * Edge cases: c='\0' returns pointer to null terminator
 * Manual: char *strchr(const char *s, int c); | 42: char *ft_strchr(const char *s, int c);
 */
char *ft_strchr(const char *s, int c);

/* ft_strrchr | locate last occurrence of char
 * Receives: const char *s, int c
 * Returns: pointer to last occurrence or NULL
 * Edge cases: c='\0' returns pointer to null terminator
 * Manual: char *strrchr(const char *s, int c); | 42: char *ft_strrchr(const char *s, int c);
 */
char *ft_strrchr(const char *s, int c);

/* ft_strncmp | compare strings up to n chars
 * Receives: const char *s1, const char *s2, size_t n
 * Returns: <0, 0, >0 depending on comparison
 * Edge cases: n=0 returns 0
 * Manual: int strncmp(const char *s1, const char *s2, size_t n); | 42: int ft_strncmp(const char *s1, const char *s2, size_t n);
 */
int ft_strncmp(const char *s1, const char *s2, size_t n);

/* ft_memchr | locate byte in memory
 * Receives: const void *s, int c, size_t n
 * Returns: pointer to first occurrence or NULL
 * Edge cases: n=0 returns NULL
 * Manual: void *memchr(const void *s, int c, size_t n); | 42: void *ft_memchr(const void *s, int c, size_t n);
 */
void *ft_memchr(const void *s, int c, size_t n);

/* ft_memcmp | compare memory areas
 * Receives: const void *s1, const void *s2, size_t n
 * Returns: <0, 0, >0 depending on comparison
 * Edge cases: n=0 returns 0
 * Manual: int memcmp(const void *s1, const void *s2, size_t n); | 42: int ft_memcmp(const void *s1, const void *s2, size_t n);
 */
int ft_memcmp(const void *s1, const void *s2, size_t n);

/* ft_strnstr | locate substring in string (up to len)
 * Receives: const char *haystack, const char *needle, size_t len
 * Returns: pointer to first occurrence or NULL
 * Edge cases: needle="" returns haystack; len=0 returns NULL
 * Manual: char *strnstr(const char *haystack, const char *needle, size_t len); | 42: char *ft_strnstr(const char *haystack, const char *needle, size_t len);
 */
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

/* ft_atoi | convert string to integer
 * Receives: const char *str
 * Returns: int value
 * Edge cases: leading spaces, optional +/-, stops at first non-digit, overflow undefined
 * Manual: int atoi(const char *nptr); | 42: int ft_atoi(const char *str);
 */
int ft_atoi(const char *str);

/* ft_calloc | allocate memory initialized to 0
 * Receives: size_t count, size_t size
 * Returns: pointer to memory or NULL
 * Edge cases: count=0 or size=0 may return NULL or valid pointer
 * Manual: void *calloc(size_t nmemb, size_t size); | 42: void *ft_calloc(size_t count, size_t size);
 */
void *ft_calloc(size_t count, size_t size);

/* ft_strdup | duplicate string
 * Receives: const char *s1
 * Returns: malloc'ed copy or NULL
 * Edge cases: empty string returns malloc with '\0'
 * Manual: char *strdup(const char *s); | 42: char *ft_strdup(const char *s1);
 */
char *ft_strdup(const char *s1);

/* ************************************************************************** */
/* Part 2 - Additional functions                                              */
/* ************************************************************************** */

/* ft_substr | extract substring
 * Receives: const char *s, unsigned int start, size_t len
 * Returns: malloc'ed substring or NULL
 * Edge cases: start>strlen(s) returns empty string
 * 42: char *ft_substr(char const *s, unsigned int start, size_t len);
 */
char *ft_substr(char const *s, unsigned int start, size_t len);

/* ft_strjoin | join two strings
 * Receives: const char *s1, const char *s2
 * Returns: malloc'ed concatenation
 * Edge cases: either string NULL -> undefined
 * 42: char *ft_strjoin(char const *s1, char const *s2);
 */
char *ft_strjoin(char const *s1, char const *s2);

/* ft_strtrim | trim set chars from start/end
 * Receives: const char *s1, const char *set
 * Returns: malloc'ed trimmed string
 * Edge cases: set="" returns copy of s1
 * 42: char *ft_strtrim(char const *s1, char const *set);
 */
char *ft_strtrim(char const *s1, char const *set);

/* ft_split | split string by delimiter
 * Receives: const char *s, char c
 * Returns: NULL-terminated array of malloc'ed strings
 * Edge cases: consecutive delimiters -> ignored
 * 42: char **ft_split(char const *s, char c);
 */
char **ft_split(char const *s, char c);

/* ft_itoa | integer to string
 * Receives: int n
 * Returns: malloc'ed string representing n
 * Edge cases: INT_MIN handled
 * 42: char *ft_itoa(int n);
 */
char *ft_itoa(int n);

/* ft_strmapi | apply function to each char, returns new string
 * Receives: const char *s, function f(unsigned int, char)
 * Returns: malloc'ed string or NULL if s=NULL
 * 42: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* ft_striteri | apply function to each char, in-place
 * Receives: char *s, function f(unsigned int, char*)
 * Returns: void
 * Edge cases: NULL s -> does nothing
 * 42: void ft_striteri(char *s, void (*f)(unsigned int, char*));
 */
void ft_striteri(char *s, void (*f)(unsigned int, char*));

/* ft_putchar_fd | write char to fd
 * Receives: char c, int fd
 * Returns: void
 * Edge cases: invalid fd -> write fails
 * 42: void ft_putchar_fd(char c, int fd);
 */
void ft_putchar_fd(char c, int fd);

/* ft_putstr_fd | write string to fd
 * Receives: char *s, int fd
 * Returns: void
 * Edge cases: s=NULL -> does nothing
 * 42: void ft_putstr_fd(char *s, int fd);
 */
void ft_putstr_fd(char *s, int fd);

/* ft_putendl_fd | write string + newline to fd
 * Receives: char *s, int fd
 * Returns: void
 * Edge cases: s=NULL -> writes only newline
 * 42: void ft_putendl_fd(char *s, int fd);
 */
void ft_putendl_fd(char *s, int fd);

/* ft_putnbr_fd | write integer to fd
 * Receives: int n, int fd
 * Returns: void
 * Edge cases: INT_MIN handled
 * 42: void ft_putnbr_fd(int n, int fd);
 */
void ft_putnbr_fd(int n, int fd);

/* ************************************************************************** */
/* Bonus - Linked list functions                                              */
/* ************************************************************************** */


/* ft_lstnew | create new list node
 * Receives: void *content
 * Returns: pointer to new node
 * 42: t_list *ft_lstnew(void *content);
 */
t_list *ft_lstnew(void *content);

/* ft_lstadd_front | add node at front
 * Receives: t_list **lst, t_list *new
 * Returns: void
 * 42: void ft_lstadd_front(t_list **lst, t_list *new);
 */
void ft_lstadd_front(t_list **lst, t_list *new);

/* ft_lstsize | count nodes in list
 * Receives: t_list *lst
 * Returns: number of nodes
 * 42: int ft_lstsize(t_list *lst);
 */
int ft_lstsize(t_list *lst);

/* ft_lstlast | return last node
 * Receives: t_list *lst
 * Returns: pointer to last node or NULL
 * 42: t_list *ft_lstlast(t_list *lst);
 */
t_list *ft_lstlast(t_list *lst);

/* ft_lstadd_back | add node at end
 * Receives: t_list **lst, t_list *new
 * Returns: void
 * 42: void ft_lstadd_back(t_list **lst, t_list *new);
 */
void ft_lstadd_back(t_list **lst, t_list *new);

/* ft_lstdelone | delete single node
 * Receives: t_list *lst, function del(void *)
 * Returns: void
 * 42: void ft_lstdelone(t_list *lst, void (*del)(void*));
 */
void ft_lstdelone(t_list *lst, void (*del)(void*));

/* ft_lstclear | delete all nodes
 * Receives: t_list **lst, function del(void *)
 * Returns: void
 * 42: void ft_lstclear(t_list **lst, void (*del)(void*));
 */
void ft_lstclear(t_list **lst, void (*del)(void*));

/* ft_lstiter | apply function to all nodes
 * Receives: t_list *lst, function f(void *)
 * Returns: void
 * 42: void ft_lstiter(t_list *lst, void (*f)(void *));
 */
void ft_lstiter(t_list *lst, void (*f)(void *));

/* ft_lstmap | map function to nodes, return new list
 * Receives: t_list *lst, function f(void *), del(void *)
 * Returns: pointer to new list or NULL
 * 42: t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
