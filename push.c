/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:35:04 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 00:41:27 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **x, t_list **y)
{
	t_list	*stx;
	t_list	*sty;

	if (!x || !*x)
		return ;
	stx = *x;
	sty = *y;
	*x = stx->next;
	*y = stx;
	stx->next = sty;
}

void	pa(t_list **a, t_list **b, int flag)
{
	push(b, a);
	if (flag == 0)
		write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b, int flag)
{
	push(a, b);
	if (flag == 0)
		write(1, "pb\n", 3);
}
