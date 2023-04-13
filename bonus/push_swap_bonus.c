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

#include "ps_bonus.h"

void	exec_inst(t_stack **a, t_stack **b, char *inst)
{
	if (!ft_strcmp(inst, "sa\n"))
		sa(a);
	else if (!ft_strcmp(inst, "sb\n"))
		sb(b);
	else if (!ft_strcmp(inst, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(inst, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(inst, "pb\n"))
		pb(a, b);
	else if (!ft_strcmp(inst, "ra\n"))
		ra(a);
	else if (!ft_strcmp(inst, "rb\n"))
		rb(b);
	else if (!ft_strcmp(inst, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(inst, "rra\n"))
		rra(a);
	else if (!ft_strcmp(inst, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(inst, "rrr\n"))
		rrr(a, b);
	else
		call_error("Error\n");
}

void	read_instructions(t_stack **a, t_stack **b)
{
	char	*inst;

	inst = get_next_line(0);
	while (inst)
	{
		if (!inst)
			return ;
		exec_inst(a, b, inst);
		free(inst);
		inst = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	char	**args;
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		call_error("Error\n");
	args = input_nbrs(av);
	a = add_new_stack(ac, args);
	b = add_new_stack(0, args);
	read_instructions(&a, &b);
	if (!b && is_sorted(a) == 1)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_free_node(&a);
	ft_free_node(&b);
	return (0);
}
