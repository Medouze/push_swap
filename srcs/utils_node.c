/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:09:30 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/23 22:14:14 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_biggest_index(t_stack *stack)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

int	find_smallest_index(t_stack *stack)
{
	int	index;

	index = ft_stacksize(stack);
	while (stack)
	{
		if (stack->index < index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

int	ft_stacksize(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	small_sort(t_stack **stack)
{
	int	biggest_index;

	if (check_sorted(*stack))
		return ;
	biggest_index = find_biggest_index(*stack);
	if ((*stack)->index == biggest_index)
		ra(stack);
	else if ((*stack)->next->index == biggest_index)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

int	find_index_zero(t_stack *stack, int i)
{
	int	index;

	index = 0;
	while (stack->index != i)
	{
		index++;
		stack = stack->next;
	}
	return (index);
}
