/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:22:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:22:19 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ps_bonus.h"

void	ft_free_node(t_stack **node)
{
	t_stack	*temp;

	if (!node || !(*node))
		return ;
	while (*node)
	{
		temp = (*node)->next;
		free(*node);
		*node = temp;
	}
	*node = NULL;
}
