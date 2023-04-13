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

#include "../push_swap.h"

t_stack	*ft_prelast(t_stack *node)
{
	if (!node || !node->next)
		return (NULL);
	while (node->next->next)
		node = node->next;
	return (node);
}
