/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:35:04 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/15 20:58:36 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_list **x, t_list **y)
{
    t_list *stx;
    t_list *sty;
    
    if (!x || !*x)
         return;
    stx = *x;
    sty = *y;
    *x = stx->next;
    *y = stx;
    stx->next = sty;
}

void pa(t_list **a, t_list **b)
{
    push(b, a);
    write(1, "pa\n", 3);
}

void pb(t_list **a, t_list **b)
{
    push(a, b);
    write(1, "pb\n", 3);
}