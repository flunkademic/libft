/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:08:17 by flunkademic       #+#    #+#             */
/*   Updated: 2025/09/30 22:49:37 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);

// memset
void *ft_memset(void *b, int c, size_t len);

// bzero
void ft_bzero(void *s, size_t n);

// memcpy
void *ft_memcpy(void *dst, const void *src, size_t n);

// memmove
void *ft_memmove(void *dst, const void *src, size_t len);

// strlcpy
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

// strlcat
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

// toupper
int ft_toupper(int c);  

// tolower
int ft_tolower(int c);  

// strchr
char *ft_strchr(const char *s, int c);

// strrchr
char *ft_strrchr(const char *s, int c);

// strncmp
int ft_strncmp(const char *s1, const char *s2, size_t n);

// memchr
void *ft_memchr(const void *s, int c, size_t n);

// memcmp
int ft_memcmp(const void *s1, const void *s2, size_t n);

// strnstr
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

// atoi
int ft_atoi(const char *str);

// calloc
void *ft_calloc(size_t count, size_t size);

// strdup
char *ft_strdup(const char *s1);



#endif