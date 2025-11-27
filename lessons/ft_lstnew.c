/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:26:06 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 16:57:06 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_p;

	new_p = (t_list *)malloc(sizeof(t_list));
	if (!new_p)
		return (NULL);
	new_p->content = content;
	new_p->next = NULL;
	return (new_p);
}
/*
int main(void)
{
	int a = 10, b = 20, c = 30;

	// Create nodes
	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);
	t_list *node3 = ft_lstnew(&c);
		
	t_list node4;
	// Connect them
	node1->next = node2;
	node2->next = node3;
		
	// Now we got through the list
	t_list *current = node1;
	while (current)
	{
		printf("Number: %d\n", *(int *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	free(node3);
	return 0;
}
*/