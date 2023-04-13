/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:14:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:14:41 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getmin_number5(t_stack *node)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;
	int	nbr4;
	int	nbr5;

	nbr1 = node->nbr;
	nbr2 = node->next->nbr;
	nbr3 = node->next->next->nbr;
	nbr4 = ft_prelast(node)->nbr;
	nbr5 = ft_lstlast(node)->nbr;
	if (nbr1 < nbr2 && nbr1 < nbr3 && nbr1 < nbr4 && nbr1 < nbr5)
		return (0);
	else if (nbr2 < nbr1 && nbr2 < nbr3 && nbr2 < nbr4 && nbr2 < nbr5)
		return (1);
	else if (nbr3 < nbr1 && nbr3 < nbr2 && nbr3 < nbr4 && nbr3 < nbr5)
		return (2);
	else if (nbr4 < nbr1 && nbr4 < nbr2 && nbr4 < nbr3 && nbr4 < nbr5)
		return (3);
	else
		return (4);
}

void	movenbr_to_top_stack5(t_stack **a)
{
	if (getmin_number5(*a) == 0)
		return ;
	else if (getmin_number5(*a) == 1)
		rotate(a, "ra\n");
	else if (getmin_number5(*a) == 2)
	{
		rotate(a, "ra\n");
		rotate(a, "ra\n");
	}
	else if (getmin_number5(*a) == 3)
	{
		reverse_rotate(a, "rra\n");
		reverse_rotate(a, "rra\n");
	}
	else
		reverse_rotate(a, "rra\n");
}

void	sort_five(t_stack **a, t_stack **b)
{
	movenbr_to_top_stack5(a);
	if (!is_sorted(*a))
	{
		push(a, b, "pb\n");
		sort_four(a, b);
		push(b, a, "pa\n");
	}
}
