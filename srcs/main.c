/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:47:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 18:37:31 by mlavergn         ###   ########.fr       */
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
	print_stack(stack_a);
	if (argc == 2)
		free_argv(args);
	free_stack(stack_a);
	return (0);
}
