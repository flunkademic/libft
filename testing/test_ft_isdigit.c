/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:02:53 by flunkademic       #+#    #+#             */
/*   Updated: 2025/11/11 00:05:45 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_isdigit(void)
{
    int test_cases[] = {'0', '9', '4', 'a', 'Z', '\t', 48, 57, 65, 128, EOF, -5, 1000};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n==================================================\n");
    printf("          Testing ft_isdigit vs isdigit\n");
    printf("==================================================\n\n");
    
    printf("Char        Decimal  ft_isdigit  isdigit  Result\n");
    printf("----        -------  ----------  -------  ------\n");
    
    int i = 0;
    while (i < num_cases)
    {
        int c = test_cases[i];
        int my_result = ft_isdigit(c);
        int standard_result = isdigit(c);
        
        char display[8];
        if (c >= 32 && c <= 126)
            snprintf(display, sizeof(display), "'%c'", c);
        else
            snprintf(display, sizeof(display), "\\%d", c);

        printf("%-8s    %5d       %5d      %5d      %s\n", 
               display, c, my_result, standard_result,
               (my_result != 0) == (standard_result != 0) ? "✓" : "✗");
        i++;
    }

    printf("\nExtra tests:\n");
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
    printf("EOF value: %d\n", EOF);
}
