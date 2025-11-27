/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:56:55 by laraus            #+#    #+#             */
/*   Updated: 2025/11/06 15:01:21 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);

int	main(void)
{
	printf("===== LIBFT Tests =====\n\n");
	
	test_ft_isalpha();
	test_ft_isdigit();

	printf("===== Tests Completed =====");
	return (0);
}