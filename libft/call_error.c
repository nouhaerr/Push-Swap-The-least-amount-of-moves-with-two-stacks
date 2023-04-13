/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:16:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:16:31 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	call_error(char *message)
{
	if (message != NULL)
	{
		write(2, message, ft_strlen(message));
	}
	exit(EXIT_FAILURE);
}
