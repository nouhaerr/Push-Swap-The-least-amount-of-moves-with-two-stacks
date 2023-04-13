/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:15:07 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:15:07 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getmin_number(t_stack *node)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;
	int	nbr4;

	nbr1 = node->nbr;
	nbr2 = node->next->nbr;
	nbr3 = ft_prelast(node)->nbr;
	nbr4 = ft_lstlast(node)->nbr;
	if (nbr1 < nbr2 && nbr1 < nbr3 && nbr1 < nbr4)
		return (0);
	else if (nbr2 < nbr1 && nbr2 < nbr3 && nbr2 < nbr4)
		return (1);
	else if (nbr3 < nbr1 && nbr3 < nbr2 && nbr3 < nbr4)
		return (2);
	else
		return (3);
}

void	movenbr_to_top_stack(t_stack **a)
{
	if (getmin_number(*a) == 0)
		return ;
	else if (getmin_number(*a) == 1)
		rotate(a, "ra\n");
	else if (getmin_number(*a) == 2)
	{
		rotate(a, "ra\n");
		rotate(a, "ra\n");
	}
	else
		reverse_rotate(a, "rra\n");
}

void	sort_four(t_stack **a, t_stack **b)
{
	movenbr_to_top_stack(a);
	if (!is_sorted(*a))
	{
		push(a, b, "pb\n");
		sort_three(a);
		push(b, a, "pa\n");
	}
}
