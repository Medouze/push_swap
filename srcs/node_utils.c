/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:32:57 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:18:49 by mlavergn         ###   ########.fr       */
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
		ft_error("Allocation failed\n", *stack);
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

void	ft_print_two_stack(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf(GREEN "[STACK_A]\n");
	while (stack_a)
	{
		ft_printf("[%p][%d][%d]\n", stack_a, stack_a->data, stack_a->index);
		stack_a = stack_a->next;
	}
	if (!stack_a)
		ft_printf(RED "[%p]NULL\n" NORMAL, stack_a);
	ft_printf(YELLOW "[STACK_B]\n");
	while (stack_b)
	{
		ft_printf("[%p][%d][%d]\n", stack_b, stack_b->data, stack_b->index);
		stack_b = stack_b->next;
	}
	if (!stack_b)
		ft_printf(RED "[%p]NULL\n" NORMAL, stack_b);
}
