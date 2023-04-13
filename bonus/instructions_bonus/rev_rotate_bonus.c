/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:21:48 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:21:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ps_bonus.h"

static void	reverse_rotate(t_stack **a)
{
	t_stack	*last;
	t_stack	*prelast;

	if (!a || !(*a) || ft_lstsize(*a) <= 1)
		return ;
	last = ft_lstlast(*a);
	prelast = ft_prelast(*a);
	if (prelast && last)
	{
		prelast->next = NULL;
		ft_lstadd_front(a, last);
	}
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
