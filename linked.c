/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:46:41 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/24 22:49:25 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(int content)
{
    t_list *node;
    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
int ft_lstsize(t_list *lst)
{
    int i;
    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return(i);
}
t_list *ft_lstlast(t_list *lst)
{
    while (lst->next)
        lst = lst->next;
    return (lst);
}
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr;
    
    if (!*lst)
    {
       *lst = new;
       new->next = NULL;
    }
    else
    {
        curr = ft_lstlast(*lst);
        curr->next = new;
        new->next = NULL;
    }
}
void ft_lstclear(t_list **lst)
{
    t_list *curr;
    
    curr = *lst;
    while(curr)
    {
        t_list *trash;
        trash = curr;
        curr = curr->next;
        free (trash);
    }
    *lst = NULL; 
}
