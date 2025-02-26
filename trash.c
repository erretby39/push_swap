/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 02:07:08 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/26 19:19:45 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void trash(t_list **a, t_list **b)
{
    int s;
    int e;
    int j;
    int i = 0;
    
    int *arr;
    arr = sorted(*a);
    j = ft_lstsize(*a);
    while (i < ft_lstsize(*a))
        {
            printf("%d arr\n", arr[i]);
            i++;
        }
    e =  (ft_lstsize(*a) / 6);
    while (e <= ft_lstsize(*a))
    {
        while (*a != NULL)
        {
            // printf("%dare\n", arr[e]);
            // printf("%dars\n", arr[s]);
            if((*a)->content > arr[e])
            {
                ra(a);
                break;
            }
            if ((*a)->content <= arr[s])
            {
                pb(a, b);
                rb(b);
                if (arr[e] < j)
                {
                    e++;
                    s++;
                }
            }
            else
            {
                pb(a, b);
                if (arr[e] < j)
                {
                    e++;
                    s++;
                }
            }
        }
    }
    while (*b)
    {
        if ((*b)->content = arr[e])
        {
            pa(a, b);
            e--;
        }
        
        rrb(b);
    }
}
