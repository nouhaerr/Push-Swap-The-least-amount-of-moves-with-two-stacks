/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_new_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:22:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:22:13 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ps_bonus.h"

void	empiler(t_stack **pile, int nv_nombre)
{
	t_stack	*nouveau;

	nouveau = malloc(sizeof(*nouveau));
	if (pile == NULL || nouveau == NULL)
		call_error("Error\n");
	nouveau->nbr = nv_nombre;
	nouveau->next = *pile;
	*pile = nouveau;
}

t_stack	*add_new_stack(int ac, char **av)
{
	t_stack	*st;
	int		i;

	i = 0;
	st = NULL;
	if (!ac)
		return (st);
	while (av[i])
		i++;
	i--;
	while (i >= 0)
	{
		empiler(&st, ft_atoi(av[i]));
		i--;
	}
	return (st);
}

void	afficher_pile(t_stack **pile)
{
	t_stack	*actuel;

	if (pile == NULL)
		return ;
	actuel = *pile;
	while (actuel != NULL)
	{
		printf("%d\n", actuel->nbr);
		actuel = actuel->next;
	}
}
