/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:21:42 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:21:42 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **a, t_stack **b, char *action)
{
	t_stack	*x;

	if (!a || !b)
		return ;
	x = *a;
	if (ft_lstsize(*a))
	{
		(*a) = x->next;
		x->next = (*b);
		(*b) = x;
		ft_putstr(action);
	}
}
