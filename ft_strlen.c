/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:12:28 by flunkademic       #+#    #+#             */
/*   Updated: 2025/11/11 01:26:06 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    const char  *p;

    p = s;
    while (*s)
    {
        s++;
    }
    return (s - p);
}
int main(void)
{
    char *test_strings[] = {"", "a", "hello", "test string", NULL};
    int i = 0;
    
    while (test_strings[i])
    {
        size_t my_len = ft_strlen(test_strings[i]);
        size_t std_len = strlen(test_strings[i]);
        printf("String: '%-15s' | ft_strlen: %-5zu | strlen: %-5zu | %s\n",
               test_strings[i], my_len, std_len,
               my_len == std_len ? "✓" : "✗");
        i++;
    }
    return (0);
}
