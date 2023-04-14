/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:16:11 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:16:11 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_len(char **av)
{
	int		i;
	int		j;
	int		len;
	char	**tmp;

	i = 0;
	len = 0;
	while (av[++i])
	{
		if (!*av[i])
			call_error("Error\n");
		tmp = ft_split(av[i], ' ');
		j = 0;
		while (tmp[j])
		{
			len += ft_strlen(tmp[j]) + 1;
			j++;
		}
		ft_free(tmp);
	}
	return (len);
}

static void	check_spaces(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] == 32)
		i++;
	if (i == len)
		call_error("Error\n");
}

static char	*separate_nbrs_input(char **av, int *len)
{
	int		i;
	int		j;
	char	*nbrs;
	char	**tmp;

	i = 0;
	*len = count_len(av);
	nbrs = (char *)malloc(sizeof(char) * (*len));
	if (!nbrs)
		return (NULL);
	nbrs[0] = '\0';
	while (av[++i])
	{
		check_spaces(av[i]);
		if (!*av[i])
			call_error("Error\n");
		tmp = ft_split(av[i], ' ');
		j = -1;
		while (tmp[++j])
		{
			ft_strlcat(nbrs, tmp[j], *len);
			ft_strlcat(nbrs, " ", *len);
		}
		ft_free(tmp);
	}
	return (nbrs);
}

char	**input_nbrs(char **av)
{
	int		len;
	char	*nbrs;
	char	**args;

	nbrs = separate_nbrs_input(av, &len);
	args = ft_split(nbrs, ' ');
	free(nbrs);
	if (!check_args(args))
		call_error("Error\n");
	return (args);
}
