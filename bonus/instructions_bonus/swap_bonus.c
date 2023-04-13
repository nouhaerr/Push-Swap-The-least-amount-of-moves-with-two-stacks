/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:22:00 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:22:00 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ps_bonus.h"

static void	swap(t_stack *elm)
{
	int	tmp;

	if (!elm || !elm->next)
		return ;
	tmp = elm->nbr;
	elm->nbr = elm->next->nbr;
	elm->next->nbr = tmp;
}

void	sa(t_stack **stack_a)
{
	swap(*stack_a);
}

void	sb(t_stack **stack_b)
{
	swap(*stack_b);
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}
