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

#include "../push_swap.h"

void	swap(t_stack *elm, char *action)
{
	int	tmp;

	if (!elm || !elm->next)
		return ;
	tmp = elm->nbr;
	elm->nbr = elm->next->nbr;
	elm->next->nbr = tmp;
	ft_putstr(action);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a, NULL);
	swap(b, NULL);
	ft_putstr("ss\n");
}
