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

#include "../ps_bonus.h"

static void	push(t_stack **a, t_stack **b)
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
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}
