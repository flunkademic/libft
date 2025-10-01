/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:52:20 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/01 00:00:27 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// only needed for PRINTF debugging
#include "libft.h"
*/

int ft_strlen(char *str)
{
    int i;

    i = 0;
    // while (*str++)
    //     i++;
    // while (*(str + i))
    //     i++;
    while (str[i])
    {
        i++;
    }
    return i;
}
/*
int main(void)
{
    printf("Length: %d\n", ft_strlen("bitchass"));
    // return (ft_strlen("bitchass"));
    return (0);
}
*/