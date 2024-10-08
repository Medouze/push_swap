/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:47:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 22:13:29 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**args;

	stack_a = NULL;
	args = parse_argv(argv, argc);
	init_stack(&stack_a, args);
	if (argc == 2)
		free_argv(args);
	print_stack(stack_a);
	if (!check_sorted(stack_a))
	{
		if (check_nbr_node(stack_a) == 2)
			swap_a(&stack_a);
	}
	print_stack(stack_a);
	free_stack(stack_a);
	return (0);
}
