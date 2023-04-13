/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:14:23 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/10 08:14:23 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_BONUS_H
# define PS_BONUS_H

# include "gnl/get_next_line.h"

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

int			check_args(char **av);
char		**input_nbrs(char **av);
int			is_sorted(t_stack *stack);
void		ft_free_node(t_stack **node);
void		empiler(t_stack **pile, int nvNombre);
void		afficher_pile(t_stack **pile);
t_stack		*add_new_stack(int ac, char **av);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rrb(t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrr(t_stack **stack_a, t_stack **stack_b);
size_t		ft_lstsize(t_stack *lst);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*ft_prelast(t_stack *node);

#endif