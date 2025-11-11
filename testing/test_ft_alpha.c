/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:16:10 by flunkademic       #+#    #+#             */
/*   Updated: 2025/11/10 22:55:40 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_alpha(void)
{
    int test_cases[] = 
    {
        'a',
        'é',
        'Z',
        'g',
        'M',
        'z',
        'A',
        '0',
        '\n',
        ' ',
        '@',
        '[',
        '`',
        -1,
        128,
        200,
        EOF
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    printf("\n==================================================\n");
    printf("          Testing ft_isalpha vs isalpha\n");
    printf("==================================================\n\n");
    
    printf("  Char        Decimal  ft_isalpha  isalpha  Result\n");
    printf(" ------       -------  ----------  -------  ------\n");
    
    int i;
    
    i = 0;
    while (i < num_tests)
    {
        int c = test_cases[i];
        int my_result = ft_isalpha(c);
        int standard_result = isalpha(c);

        char char_display[8];  // Buffer for character representation

        if (c >= 32 && c <= 126)
            snprintf(char_display, sizeof(char_display), "'%c'", c);
        else
            snprintf(char_display, sizeof(char_display), "\\%d", c);

        printf("  %-7s    %6d     %5d      %5d      %s\n", 
            char_display, c, my_result, standard_result, 
            (my_result != 0) == (standard_result != 0) ? "✓" : "✗");
            
        /*
        printf("Char:  ");
        if (c >= 32 && c <= 126)
            printf("'%-6c'", c);
        else
            printf("\\%d", c);

        // printf("      | Decimal: %2d    | ft_isalpha: %d     | isalpha: %d     | %s\n", c, my_result, standard_result, (my_result == !!standard_result) ? "Y" : "N");
        printf("      | Decimal: %5d    | ft_isalpha: %d     | isalpha: %5d     | %s\n", c, my_result, standard_result, (my_result != 0) == (standard_result != 0) ? "Y" : "N");
        */
        i++;
    }
    
    // The isalpha function should return 0 (false) or non-zero (true)
    printf("\n");
    printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
    printf("ft_isalpha('0') = %d\n", ft_isalpha('0'));
    printf("EOF value: %d\n", EOF);
}

/*

==================================================
          Testing ft_isalpha vs isalpha
==================================================

  Char        Decimal  ft_isalpha  isalpha  Result
 ------       -------  ----------  -------  ------
  'a'            97         1       1024      ✓
  \50089      50089         0       1024      ✗
  'Z'            90         1       1024      ✓
  'g'           103         1       1024      ✓
  'M'            77         1       1024      ✓
  'z'           122         1       1024      ✓
  'A'            65         1       1024      ✓
  '0'            48         0          0      ✓
  \10            10         0          0      ✓
  ' '            32         0          0      ✓
  '@'            64         0          0      ✓
  '['            91         0          0      ✓
  '`'            96         0          0      ✓
  \-1            -1         0          0      ✓
  \128          128         0          0      ✓
  \200          200         0          0      ✓
  \-1            -1         0          0      ✓

ft_isalpha('a') = 1
ft_isalpha('0') = 0
EOF value: -1

*/