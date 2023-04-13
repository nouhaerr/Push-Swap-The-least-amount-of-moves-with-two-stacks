/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:21:53 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:21:53 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ps_bonus.h"

static void	rotate(t_stack **a)
{
	t_stack	*x;

	if (!a || !(*a) || ft_lstsize(*a) <= 1)
		return ;
	x = *a;
	if (x)
	{
		*a = (*a)->next;
		ft_lstadd_back(a, x);
		x->next = NULL;
	}
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
