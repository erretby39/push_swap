/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:06:32 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/19 14:27:15 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap (t_list **t)
{
    t_list *st;
    t_list *nd;
    
    if (!*t || !(*t)->next)
        return;
    st = *t;
    nd = st->next;
    st->next = nd->next;
    nd->next = st;
    *t = nd;
}

void sa(t_list **a)
{
    swap(a);
    write (1, "sa\n", 3);
}

void sb(t_list **b)
{
    swap(b);
    write (1, "sb\n", 3);
}

void ss(t_list **a, t_list **b)
{
    swap (a);
    swap (b);
    write (1, "ss\n", 3);
}
