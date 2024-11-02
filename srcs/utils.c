/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 07:32:17 by mlavergn          #+#    #+#             */
/*   Updated: 2024/11/02 19:41:40 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_stack *stack)
{
	ft_putendl_fd("Error", 2);
	if (stack)
		free_stack(stack);
	exit(EXIT_FAILURE);
}

void	free_argv(char **argv)
{
	int	i;

	i = 0;
	if (argv)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
}

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

long	ft_atol(char *n)
{
	size_t	i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (n[i] == 32 || (n[i] >= 9 && n[i] <= 13))
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		nbr = (nbr * 10) + (n[i] - '0');
		i++;
	}
	return (nbr * sign);
}
