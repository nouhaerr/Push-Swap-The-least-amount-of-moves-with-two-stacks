/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:15:23 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:15:23 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;

	if (is_sorted(*a))
		return ;
	nbr1 = (*a)->nbr;
	nbr2 = (*a)->next->nbr;
	nbr3 = (*a)->next->next->nbr;
	if (nbr1 > nbr2 && nbr2 < nbr3 && nbr1 < nbr3)
		swap(*a, "sa\n");
	else if (nbr1 > nbr2 && nbr2 > nbr3 && nbr1 > nbr3)
	{
		swap(*a, "sa\n");
		reverse_rotate(a, "rra\n");
	}
	else if (nbr1 < nbr2 && nbr2 > nbr3 && nbr1 < nbr3)
	{
		swap(*a, "sa\n");
		rotate(a, "ra\n");
	}
	else if (nbr1 < nbr2 && nbr2 > nbr3 && nbr1 > nbr3)
		reverse_rotate(a, "rra\n");
	else if (nbr1 > nbr2 && nbr2 < nbr3 && nbr1 > nbr3)
		rotate(a, "ra\n");
}
