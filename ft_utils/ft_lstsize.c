/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:22:48 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:22:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_lstsize(t_stack *lst)
{
	size_t	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
