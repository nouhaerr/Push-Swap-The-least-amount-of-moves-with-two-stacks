/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:14:18 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:14:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_arr(int size, char **av)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = ft_atoi(av[i]);
		i++;
	}
	return (arr);
}

void	sorted_array(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	run_algo(t_stack **a, t_stack **b, int size, int *tab)
{
	if (is_sorted(*a))
		return ;
	else if (size >= 2 && size <= 5)
		short_sort(a, b, size);
	else if (size > 5)
		big_sort(a, b, tab, size);
}

int	main(int ac, char **av)
{
	int		*arr;
	char	**args;
	int		stack_size;
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		call_error("Error\n");
	args = input_nbrs(av);
	a = add_new_stack(ac, args);
	b = add_new_stack(0, args);
	stack_size = ft_lstsize(a);
	arr = fill_arr(stack_size, args);
	sorted_array(arr, stack_size);
	run_algo(&a, &b, stack_size, arr);
	// printf("Etat de la pile a: \n");
	// afficher_pile(&a);
	// printf("Etat de la pile b: \n");
	// afficher_pile(&b);
	ft_free_node(&a);
	ft_free_node(&b);
	// system("leaks push_swap");
	return (0);
}
