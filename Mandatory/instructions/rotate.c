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

#include "../push_swap.h"

void	rotate(t_stack **a, char *action)
{
	t_stack	*x;

	if (!a || !(*a)->next)
		return ;
	x = *a;
	*a = (*a)->next;
	ft_lstadd_back(a, x);
	x->next = NULL;
	ft_putstr(action);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_putstr("rr\n");
}
