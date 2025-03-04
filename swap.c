/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:06:32 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 00:41:57 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **t)
{
	t_list	*st;
	t_list	*nd;

	if (!*t || !(*t)->next)
		return ;
	st = *t;
	nd = st->next;
	st->next = nd->next;
	nd->next = st;
	*t = nd;
}

void	sa(t_list **a, int flag)
{
	swap(a);
	if (flag == 0)
		write(1, "sa\n", 3);
}

void	sb(t_list **b, int flag)
{
	swap(b);
	if (flag == 0)
		write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b, int flag)
{
	swap(a);
	swap(b);
	if (flag == 0)
		write(1, "ss\n", 3);
}
