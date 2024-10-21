/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:11:09 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:15:51 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*stack_b_first;

	if (!stack_b || !(*stack_b))
		return ;
	stack_b_first = (*stack_b);
	if ((*stack_b)->next)
	{
		(*stack_b) = (*stack_b)->next;
		(*stack_b)->previous = NULL;
	}
	else
		(*stack_b) = NULL;
	if (*stack_a)
		(*stack_a)->previous = stack_b_first;
	stack_b_first->next = (*stack_a);
	(*stack_a) = stack_b_first;
	ft_putstr("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*stack_a_first;

	if (!stack_a || !(*stack_a))
		return ;
	stack_a_first = (*stack_a);
	if ((*stack_a)->next)
	{
		(*stack_a) = (*stack_a)->next;
		(*stack_a)->previous = NULL;
	}
	else
		(*stack_a) = NULL;
	if (*stack_b)
		(*stack_b)->previous = stack_a_first;
	stack_a_first->next = (*stack_b);
	(*stack_b) = stack_a_first;
	ft_putstr("pb\n");
}
