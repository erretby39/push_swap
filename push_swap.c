/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bay: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:43:18 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/19 19:06:59 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *a;
    t_list *b;
    
    a = NULL;
    b = NULL;
    if (ac == 1 || (ac == 2 && !av[1][0]))
        return (0);
    fill_stack(&a, av);
    if (chek_dup(a) == 0)
        return(ft_lstclear(&a), 1);
    if (chek_sorte(a) == 1)
        return(ft_lstclear(&a), 0);
    if (ft_lstsize(a) <= 3)
        sort3(&a);
    else if(ft_lstsize(a) <= 5)
        sort5(&a, &b);
    else
        sort_v1(&a, &b, sorted(a), ft_lstsize(a));
    while (a)
    {
        t_list *trash;
        trash = a;
        a = a->next;
        free (trash);
    }
}
