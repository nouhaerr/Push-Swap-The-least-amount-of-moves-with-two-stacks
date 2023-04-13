/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:23:24 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:23:24 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	chunk_sort(t_stack **a, t_stack **b, int size)
{
	int	count;
	int	chunk;

	count = 0;
	chunk = 13;
	if (size >= 500)
		chunk = 35;
	while (*a)
	{
		if ((*a)->nbr < (count + chunk))
		{
			push(a, b, "pb\n");
			if ((*b) && (*b)->nbr < (count + 1))
				rotate(b, "rb\n");
			count++;
		}
		else
			rotate(a, "ra\n");
	}
	return (count);
}

void	shift_to_a(t_stack **a, t_stack **b, int nbr)
{
	int	rot;

	rot = 0;
	while (nbr--)
	{
		rot = get_rot(*b, nbr);
		if (rot == 1)
		{
			while ((*b)->nbr != nbr)
				rotate(b, "rb\n");
		}
		if (rot == -1)
		{
			while ((*b)->nbr != nbr)
				reverse_rotate(b, "rrb\n");
		}
		push(b, a, "pa\n");
	}
}

void	big_sort(t_stack **a, t_stack **b, int *tab, int size)
{
	int	count;

	switch_nbr_to_index((*a), tab, size);
	count = chunk_sort(a, b, size);
	shift_to_a(a, b, count);
}
