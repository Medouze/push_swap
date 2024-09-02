/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:03:54 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 09:06:09 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_char(char const *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	if (!(argv[i] >= '0' && argv[i] <= '9'))
		return (0);
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

t_stack	*find_last_node(t_stack *head)
{
	if (!head)
		return NULL;
	while (head->next)
		head = head->next;
	return (head);
}

void	append_node(t_stack **stack, int nbr)
{
	t_stack	*node;
	t_stack *last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		ft_error("Allocation failed\n");
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
int	check_double(t_stack *stack, int nbr)
{
	while (stack)
	{
		if (stack->data == nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->data);
		stack = stack->next;
	}
}