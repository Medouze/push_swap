/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_node2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:32:57 by mlavergn          #+#    #+#             */
/*   Updated: 2024/11/02 19:41:07 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*find_last_node(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

void	append_node(t_stack **stack, int nbr)
{
	t_stack	*node;
	t_stack	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		ft_error(*stack);
	node->data = nbr;
	node->next = NULL;
	if (!*stack)
	{
		*stack = node;
		node->previous = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->previous = last_node;
	}
}

void	index_node(t_stack *stack)
{
	t_stack	*node_cpy;
	t_stack	*first;
	int		count;

	first = stack;
	while (stack)
	{
		count = 0;
		node_cpy = first;
		while (node_cpy)
		{
			if (stack->data > node_cpy->data)
				count++;
			node_cpy = node_cpy->next;
		}
		stack->index = count;
		stack = stack->next;
	}
}
