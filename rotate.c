/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:34:57 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 00:44:18 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **t)
{
	t_list	*st;
	t_list	*last;

	if (!*t || !(*t)->next)
		return ;
	st = *t;
	last = ft_lstlast(*t);
	*t = st->next;
	last->next = st;
	st->next = NULL;
}

void	ra(t_list **a, int flag)
{
	rotate(a);
	if (flag == 0)
		write(1, "ra\n", 3);
}

void	rb(t_list **b, int flag)
{
	rotate(b);
	if (flag == 0)
		write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b, int flag)
{
	rotate(a);
	rotate(b);
	if (flag == 0)
		write(1, "rr\n", 3);
}
