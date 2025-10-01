/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:28:30 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/01 09:23:41 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// only needed for PRINTF debugging
#include "libft.h"
*/

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int main(void)
{
    // int c ='a';
    // char c2 = 128;
    printf("int:%d\nchar:%c\n", ft_isalpha(97 + 256), 97 + 256 * 2);
    return (0);
}
*/