/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprelast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:22:39 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:22:39 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ps_bonus.h"

t_stack	*ft_prelast(t_stack *node)
{
	t_stack	*current;

	if (!node)
		return (NULL);
	if (!node->next)
		return (node);
	current = node;
	while (current->next->next)
		current = current->next;
	return (current);
}
