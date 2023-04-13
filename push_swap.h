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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

int			check_args(char **av);
char		**input_nbrs(char **av);
int			is_sorted(t_stack *x);
void		ft_free_node(t_stack **node);
void		empiler(t_stack **pile, int nvNombre);
void		afficher_pile(t_stack **pile);
t_stack		*add_new_stack(int ac, char **av);
void		swap(t_stack *elm, char *action);
void		ss(t_stack *a, t_stack *b);
void		push(t_stack **a, t_stack **b, char *action);
void		rotate(t_stack **a, char *action);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		reverse_rotate(t_stack **a, char *action);
void		rrr(t_stack **stack_a, t_stack **stack_b);
size_t		ft_lstsize(t_stack *lst);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*ft_prelast(t_stack *node);
t_stack		*ft_lstdup(t_stack lst);

void		short_sort(t_stack **a, t_stack **b, int size);
void		sort_three(t_stack **a);
void		sort_four(t_stack **a, t_stack **b);
void		sort_five(t_stack **a, t_stack **b);
void		big_sort(t_stack **a, t_stack **b, int *tab, int size);
void		switch_nbr_to_index(t_stack *a, int *tab, int size);
int			get_rot(t_stack *node, int num);

#endif