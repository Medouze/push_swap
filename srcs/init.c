/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 07:43:43 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 09:24:19 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stack(t_stack **stack, char **argv)
{
	int		i;
	long	nbr;

	i = 0;
	(void)stack;
	while (argv[i])
	{
		if (!check_char(argv[i]))
			ft_error("Syntax error on arguments\n");
		nbr = ft_atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_error("Number isn't in int scope\n");
		if (check_double(*stack, nbr))
			ft_error("Twice the same argument\n");
		append_node(stack, nbr);
		i++;
	}
}