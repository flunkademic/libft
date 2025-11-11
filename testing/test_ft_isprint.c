/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:46:56 by flunkademic       #+#    #+#             */
/*   Updated: 2025/11/11 01:10:53 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_isprint(void)
{
    int test_cases[] = {'0', 0, '1', 200, 127, 'a', 'Z', 25, 57, 99, ' ', '\t', '@', 128, EOF, 31, 32, 126, 127};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n==================================================\n");
    printf("          Testing ft_isprint vs isprint\n");
    printf("==================================================\n\n");
    
    printf("Char        Decimal  ft_isprint  isprint  Result\n");
    printf("----        -------  ----------  -------  ------\n");
    
    int i = 0;
    while (i < num_cases)
    {
        int c = test_cases[i];
        int my_result = ft_isprint(c);
        int standard_result = isprint(c);

        char display_buffer[8];
        if (c >= 32 && c <= 126)
            snprintf(display_buffer, sizeof(display_buffer), "'%c'", c);
        else
            snprintf(display_buffer, sizeof(display_buffer), "\\%d", c);
        
        printf("%-8s    %5d       %5d      %5d      %s\n", 
               display_buffer, c, my_result, standard_result,
               (my_result != 0) == (standard_result != 0) ? "✓" : "✗");
        i++;
    }
}
