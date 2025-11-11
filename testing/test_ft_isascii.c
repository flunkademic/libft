/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:55:35 by flunkademic       #+#    #+#             */
/*   Updated: 2025/11/11 00:17:45 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    test_ft_isascii(void)
{
    int test_cases[] = {'0', 0, '1', 200, 127, 'a', 'Z', 25, 57, 99, ' ', '\t', '@', 128, EOF};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n==================================================\n");
    printf("          Testing ft_isascii vs isascii\n");
    printf("==================================================\n\n");
    
    printf("Char        Decimal  ft_isascii  isascii  Result\n");
    printf("----        -------  ----------  -------  ------\n");
    
    int i;
    
    i = 0;
    while (i < num_cases)
    {
        int c = test_cases[i];
        int my_result = ft_isascii(c);
        int standard_result = isascii(c);

        char display[8];
        if (c >= 32 && c <= 126)  // Printable ASCII
            snprintf(display, sizeof(display), "'%c'", c);
        else if (c == 127)        // DEL character
            snprintf(display, sizeof(display), "DEL");
        else
            snprintf(display, sizeof(display), "%d", c);

        printf("%-8s    %5d       %5d      %5d      %s\n", 
               display, c, my_result, standard_result,
               (my_result != 0) == (standard_result != 0) ? "✓" : "✗");
        
        i++;
    }
    printf("Testing DONE. Great Success!\n");
}