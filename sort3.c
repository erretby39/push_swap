/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:30:48 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/19 14:29:36 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int big_node(t_list *a)
{
    t_list *curr;
    int max_val;
    int curr_pos;
    int max_pos;
    
    curr = a;
    max_pos = 1;
    curr_pos = 1;
    max_val = a->content;
    while (curr)
    {
        if (curr->content > max_val)
        {
            max_val = curr->content;
            max_pos = curr_pos;
        }
        curr = curr->next;
        curr_pos++;
    }
    return (max_pos);
}

void sort3(t_list **a)
{
    if (big_node (*a) == 1)
    {
        ra(a);
        if (chek_sorte(*a) == 0)
            sa(a);
    }
    else if (big_node(*a) == 2)
    {
        rra(a);
        if (chek_sorte(*a) == 0)
            sa(a);
    }
    else 
    {
        if (chek_sorte(*a) == 0)
            sa(a);  
    }
}
