/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:41:54 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:18:08 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*first_stack_a;
	t_stack	*last_stack_a;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	first_stack_a = *stack_a;
	last_stack_a = find_last_node(*stack_a);
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->previous = NULL;
	last_stack_a->next = first_stack_a;
	first_stack_a->previous = last_stack_a;
	first_stack_a->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	t_stack	*first_stack_b;
	t_stack	*last_stack_b;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	first_stack_b = *stack_b;
	last_stack_b = find_last_node(*stack_b);
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->previous = NULL;
	last_stack_b->next = first_stack_b;
	first_stack_b->previous = last_stack_b;
	first_stack_b->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}
