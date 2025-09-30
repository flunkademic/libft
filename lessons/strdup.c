/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:39:20 by flunkademic       #+#    #+#             */
/*   Updated: 2025/09/30 21:39:23 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char *original = "hello";
    char *copy = strdup(original);

    printf("Original: %s\n", original);
    printf("Copy:     %s\n", copy);

    free(copy);
    return 0;
}
