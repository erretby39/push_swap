/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:32:22 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/26 19:47:06 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int small_node(t_list *a)
{
    t_list *curr;
    int min_val;
    int curr_pos;
    int min_pos;
    
    curr = a;
    min_pos = 1;
    curr_pos = 1;
    min_val = a->content;
    while (curr)
    {
        if (curr->content < min_val)
        {
            min_val = curr->content;
            min_pos = curr_pos;
        }
        curr = curr->next;
        curr_pos++;
    }
    return (min_pos);
}

void sort5(t_list **a, t_list **b)
{
    int i;
    
    while(ft_lstsize(*a) > 3)
    {
        i = small_node(*a);
        if (small_node(*a) <= (ft_lstsize(*a) / 2)+1)
        {
            while (i > 1)
            {
                ra(a);
                i--;
            }
        }
        else
            while (i <= ft_lstsize(*a))
            {
                rra(a);
                i++;
            }
        pb (a, b);
    }
    sort3(a);
    pa(a, b);
    if (ft_lstsize(*a) == 5)
        pa(a, b);
}
