/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:16:01 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:16:01 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isnumber(char *str)
{
	if (!(*str))
		return (0);
	if ((*str == '-' || *str == '+') && *(str + 1))
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

static int	nbr_limits(char *str)
{
	if (ft_strlen(str) < 12)
	{
		if (str[0] == '-' && ft_atoi(str) > 0)
			return (1);
		else if (str[0] != '-' && ft_atoi(str) < 0)
			return (1);
	}
	else
		return (1);
	return (0);
}

int	check_args(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		if (!ft_isnumber(av[i]) || nbr_limits(av[i]) == 1)
			return (0);
		i++;
	}
	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
