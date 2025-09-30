/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:40:17 by flunkademic       #+#    #+#             */
/*   Updated: 2025/09/30 21:41:12 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void) {
    int ch;
    printf("Type something, then press Ctrl+D (Linux/Mac) or Ctrl+Z (Windows):\n");

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    printf("\nEnd of input reached!\n");
    return 0;
}
