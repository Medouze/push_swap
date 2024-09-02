/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:32:42 by mlavergn          #+#    #+#             */
/*   Updated: 2024/09/02 09:24:19 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack{
	int				data;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

int		check_char(char const *argv);
void	ft_error(char *str);
void	init_stack(t_stack **stack, char **argv);
long	ft_atol(const char *nptr);
t_stack	*find_last_node(t_stack *head);
void	print_stack(t_stack *stack);
void	append_node(t_stack **stack, int nbr);
void	free_argv(char **argv);
int		check_double(t_stack *stack, int nbr);

#endif