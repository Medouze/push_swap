/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:32:42 by mlavergn          #+#    #+#             */
/*   Updated: 2024/11/02 19:40:26 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

typedef struct s_arg
{
	char	**argv;
	int		argc;
}	t_arg;

int		check_char(char const *argv);
void	ft_error(t_stack *stack);
void	init_stack(t_stack **stack, char **argv);
long	ft_atol(char *n);
t_stack	*find_last_node(t_stack *head);
void	ft_print_two_stack(t_stack *stack_a, t_stack *stack_b);
void	append_node(t_stack **stack, int nbr);
void	free_argv(char **argv);
int		check_double(char **args, int nbr, int index);
void	index_node(t_stack *stack);
int		check_sorted(t_stack *stack);
void	free_stack(t_stack *stack);
char	**parse_argv(char **argv, int argc);
int		check_nbr_node(t_stack *stack);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	swap(t_stack **stack);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		find_biggest_index(t_stack *stack);
void	small_sort(t_stack **stack);
int		find_smallest_index(t_stack *a);
int		ft_stacksize(t_stack *stack);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
void	sort_four(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
int		ft_stacksize(t_stack *stack);
void	push_swap(t_stack **stack_a, t_stack **stack_b);
int		find_index_zero(t_stack *stack, int i);

#endif