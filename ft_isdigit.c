/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:55:09 by flunkademic       #+#    #+#             */
/*   Updated: 2025/09/30 22:45:16 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

// int main(void)
// {
//     int c = 99;
//     printf("Value of c is: %d\n", c);

//     printf("isdigit('4') = %d\n", isdigit('4'));
//     printf("ft_isdigit('4') = %d\n", ft_isdigit('4'));
//     printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));

//     return 0;
// }
