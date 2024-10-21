/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:47:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 20:55:44 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**args;

	stack_a = NULL;
	stack_b = NULL;
	args = parse_argv(argv, argc);
	init_stack(&stack_a, args);
	if (argc == 2)
		free_argv(args);
	if (!check_sorted(stack_a))
	{
		if (check_nbr_node(stack_a) == 2)
			sa(&stack_a);
	}
	ft_print_two_stack(stack_a, stack_b);
	rra(&stack_a);
	ft_print_two_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
