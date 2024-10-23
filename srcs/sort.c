/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:42:33 by mlavergn          #+#    #+#             */
/*   Updated: 2024/10/23 22:25:59 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int	smallest_index;
	int	size;
	int	pos;

	smallest_index = find_smallest_index(*stack_a);
	size = ft_stacksize(*stack_a);
	pos = find_index_zero(*stack_a, 1);
	if (check_sorted(*stack_a))
		return ;
	if (pos < size / 2)
	{
		while ((*stack_a)->index != smallest_index)
			ra(stack_a);
	}
	else
	{
		while ((*stack_a)->index != smallest_index)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	small_sort(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	smallest_index;
	int	size;
	int	pos;

	smallest_index = find_smallest_index(*stack_a);
	size = ft_stacksize(*stack_a);
	pos = find_index_zero(*stack_a, 1);
	if (check_sorted(*stack_a))
		return ;
	if (pos < size / 2)
	{
		while ((*stack_a)->index != smallest_index)
			ra(stack_a);
	}
	else
	{
		while ((*stack_a)->index != smallest_index)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*num;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = ft_stacksize(*stack_a);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			num = *stack_a;
			if (((num->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (*stack_b)
			pa(stack_a, stack_b);
	}
}

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (check_nbr_node(*stack_a) == 2)
		sa(stack_a);
	else if (check_nbr_node(*stack_a) == 3)
		small_sort(stack_a);
	else if (check_nbr_node(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (check_nbr_node(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
