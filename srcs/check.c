/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:03:54 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:13:01 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_char(char const *argv)
{
	int	i;

	i = 0;
	if (!argv)
		return (0);
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

int	check_double(char **args, int nbr, int index)
{
	int	i;
	int	test;

	i = 0;
	while (i < index)
	{
		test = ft_atol(args[i]);
		if (test == nbr)
			return (1);
		i++;
	}
	return (0);
}

int	check_sorted(t_stack *stack)
{
	const t_stack	*tmp;

	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	check_nbr_node(t_stack *stack)
{
	int				i;
	const t_stack	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
