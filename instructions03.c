/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions03.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:35:23 by sbadr             #+#    #+#             */
/*   Updated: 2023/01/04 23:08:18 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **head_a, t_stack **head_b)
{
	write(1, "ss\n", 3);
	sa(head_a);
	sb(head_b);
}

int	position(t_stack **a, int index)
{
	int		pos;
	t_stack	*temp;

	temp = *a;
	pos = 0;
	while (temp->index != index)
	{
		temp = temp->next;
		pos++;
	}
	return (pos);
}

t_stack	*node_position(t_stack **a, int index)
{
	int		pos;
	t_stack	*temp;

	temp = *a;
	pos = 0;
	while (temp->index != index)
	{
			temp = temp->next;
			pos++;
	}
	return (temp);
}

void	sort_3(t_stack **a)
{
	int		max;
	t_stack	*temp;
	int		pos;

	pos = 0;
	temp = *a;
	max = highest_index(*a);
	if (max != ft_last(temp)->index)
	{
		if (position(a, max) == 0)
			ra(a);
		else
			rra(a);
	}
	if ((*a)->index != 0)
		sa(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int		min_pos;
	t_stack	*temp;
	t_stack	*min_node;

	min_node = node_position(a, 0);
	min_pos = position(a, 0);
	while ((*a)->index != min_node->index)
		if (min_pos <= 1)
			ra(a);
	else
		rra(a);
	pb(a, b);
	temp = *a;
	while (temp)
	{
		temp->index = temp->index - 1;
		temp = temp ->next;
	}
	sort_3(a);
	pa(a, b);
}
