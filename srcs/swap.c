/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:56:27 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 22:12:54 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stack **stack)
{
	t_stack *tmp;

	tmp = (*stack)->next;
    (*stack)->next = tmp->next;
    tmp->next = *stack; 
    *stack = tmp; 
	ft_printf("sa\n");
}

void	swap_b(t_stack **stack)
{
	t_stack *tmp;

	tmp = (*stack)->next;
    (*stack)->next = tmp->next;
    tmp->next = *stack; 
    *stack = tmp; 
	ft_printf("sb\n");
}

void	swap_ab(t_stack **stack)
{
	swap_a(stack);
	swap_b(stack);
	ft_printf("ss\n");
}
