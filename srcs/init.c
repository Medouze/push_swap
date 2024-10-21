/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 07:43:43 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:19:07 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**parse_argv(char **argv, int argc)
{
	char	**args;
	int		i;
	long	nbr;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	if (args == NULL || args[0] == NULL)
		ft_error("Wrong argument format\n", NULL);
	i = 0;
	while (args[i])
	{
		nbr = ft_atol(args[i]);
		if (!check_char(args[i]) || nbr > INT_MAX
			|| nbr < INT_MIN || check_double(args, nbr, i))
			ft_error("Invalid or duplicate arguments\n", NULL);
		i++;
	}
	return (args);
}

void	init_stack(t_stack **stack, char **argv)
{
	int		i;
	long	nbr;

	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		append_node(stack, nbr);
		i++;
	}
	index_node(*stack);
}
