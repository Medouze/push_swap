/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:36:52 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:16:20 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*stack_a_last;
	t_stack	*stack_a_first;
	t_stack	*second_last;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	stack_a_last = find_last_node(*stack_a);
	second_last = stack_a_last->previous;
	stack_a_first = *stack_a;
	stack_a_last->next = stack_a_first;
	stack_a_last->previous = NULL;
	stack_a_first->previous = stack_a_last;
	if (second_last)
		second_last->next = NULL;
	*stack_a = stack_a_last;
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	t_stack	*stack_b_last;
	t_stack	*stack_b_first;
	t_stack	*second_last;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	stack_b_last = find_last_node(*stack_b);
	second_last = stack_b_last->previous;
	stack_b_first = *stack_b;
	stack_b_last->next = stack_b_first;
	stack_b_last->previous = NULL;
	stack_b_first->previous = stack_b_last;
	if (second_last)
		second_last->next = NULL;
	*stack_b = stack_b_last;
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}
