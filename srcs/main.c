/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:47:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 09:25:38 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		ft_error("Error with arguments\n");
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (argv == NULL)
            ft_error("Memory allocation failed\n");
		init_stack(&stack_a, argv);
		free_argv(argv);
	}
	else if (argc > 2)
		init_stack(&stack_a, argv + 1);
	print_stack(stack_a);
	return (0);
}
