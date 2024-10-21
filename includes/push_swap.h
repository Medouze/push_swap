/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:32:42 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/21 21:12:12 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BLACK "\x1b[30m"    //    Need to be delete !!!
# define RED "\x1b[31m"        //    Need to be delete !!!
# define GREEN "\x1b[32m"    //    Need to be delete !!!
# define YELLOW "\x1b[33m"    //    Need to be delete !!!
# define BLUE "\x1b[34m"    //    Need to be delete !!!
# define PURPLE "\x1b[35m"    //    Need to be delete !!!
# define CYAN "\x1b[36m"    //    Need to be delete !!!
# define WHITE "\x1b[37m"    //    Need to be delete !!!
# define NORMAL "\x1b[m"    //    Need to be delete !!!

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
void	ft_error(char *str, t_stack *stack);
void	init_stack(t_stack **stack, char **argv);
long	ft_atol(const char *nptr);
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

#endif