/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:23:20 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:23:20 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(int *arr, int nbr, int arr_size)
{
	int		index;

	index = arr_size - 1;
	while (index >= 0)
	{
		if (arr[index] == nbr)
			return (index);
		index--;
	}
	return (-1);
}

void	switch_nbr_to_index(t_stack *a, int *tab, int size)
{
	while (a)
	{
		a->nbr = get_index(tab, a->nbr, size);
		a = a->next;
	}
}

int	nbr_of_index(t_stack *st, int nb)
{
	int	i;

	i = 0;
	while (st)
	{
		if (st->nbr == nb)
			return (i);
		i++;
		st = st->next;
	}
	return (-1);
}

int	get_rot(t_stack *node, int num)
{
	int	index;
	int	size;

	index = nbr_of_index(node, num);
	size = ft_lstsize(node);
	if (index <= size / 2)
		return (1);
	if (index > size / 2)
		return (-1);
	return (0);
}
