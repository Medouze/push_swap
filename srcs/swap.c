/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:56:27 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:16:56 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*second;

	second = (*stack)->next;
	(*stack)->next = second->next;
	if (second->next)
		(*stack)->next->previous = *stack;
	(*stack)->previous = second;
	second->next = *stack;
	second->previous = NULL;
	*stack = second;
}

void	sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void	sb(t_stack **stack)
{
	swap(stack);
	ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}
