/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:22:52 by flunkademic       #+#    #+#             */
/*   Updated: 2025/11/10 23:54:38 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    test_ft_isalnum(void)
{
    int test_cases[] = {'a', 'Z', '0', '9', '@', ' ', '\n', 'G', '5', '_', EOF,
         128};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n==================================================\n");
    printf("          Testing ft_isalnum vs isalnum\n");
    printf("==================================================\n\n");

    printf("Char        Decimal  ft_isalnum  isalnum  Result\n");
    printf("----        -------  ----------  -------  ------\n");

    int i;

    i = 0;
    while (i < num_cases)
    {
        int     c = test_cases[i];
        int     my_result = ft_isalnum(c);
        int     standard_result = isalnum(c);
        
        char    display_buffer[8];
        if (c >= 32 && c <= 126)
            snprintf(display_buffer, sizeof(display_buffer), "'%c'", c);
        else
            snprintf(display_buffer, sizeof(display_buffer), "\\%d", c);
        printf("%-8s    %5d     %5d     %5d        %s\n", 
            display_buffer, c, my_result, standard_result, 
            ((my_result != 0) == (standard_result != 0) ? "✓" : "✗"));
        i++;
    }
}

/*

@laura:~/_42/libft$ cc -Wall -Wextra -Werror ft_isalnum.c ft_isdigit.c ft_isalpha.c testing/test_ft_isalnum.c testing/testing_all.c -o main
@laura:~/_42/libft$ ./main

==================================================
          Testing ft_isalnum vs isalnum
==================================================

Char        Decimal  ft_isalnum  isalnum  Result
----        -------  ----------  -------  ------
'a'            97         1         8        ✓
'Z'            90         1         8        ✓
'0'            48         1         8        ✓
'9'            57         1         8        ✓
'@'            64         0         0        ✓
' '            32         0         0        ✓
\10            10         0         0        ✓
'G'            71         1         8        ✓
'5'            53         1         8        ✓
'_'            95         0         0        ✓
\-1            -1         0         0        ✓
\128          128         0         0        ✓
@laura:~/_42/libft$

*/



/*

void test_ft_isalnum_quick(void)
{
    // Just test a few key cases to verify the logic works
    int quick_tests[] = {'a', 'Z', '0', '9', '@', ' '};
    int num_tests = sizeof(quick_tests) / sizeof(quick_tests[0]);
    
    printf("Quick isalnum verification:\n");
    int i = 0;
    while (i < num_tests)
    {
        int c = quick_tests[i];
        int my_result = ft_isalnum(c);
        int std_result = isalnum(c);
        
        if ((my_result != 0) != (std_result != 0)) {
            printf("FAIL: char %c - ft: %d, std: %d\n", c, my_result, std_result);
        }
        i++;
    }
    printf("Quick verification done.\n");
}

*/