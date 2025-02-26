/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:25:06 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/25 15:34:08 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H



typedef struct s_list
{
int content;
struct s_list *next;
}   t_list;
//list
t_list  *ft_lstnew(int content);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstclear(t_list **lst);
t_list  *ft_plstlast(t_list *lst);
int     ft_lstendex(t_list *a , int x);

//tools
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
int     chek_sorte(t_list *a);
long	ft_atoi(const char *nb);
int     chek_dup(t_list *a);
void    fill_stack(t_list **a, char **av);
int     big_node(t_list *a);
void	ft_swap(int *a, int *b);
int     *sorarr(int *arr, int size);
int     *sorted(t_list *a);

//moves
void    swap (t_list **t);
void    sa(t_list **a);
void    sb(t_list **b);
void    ss(t_list **a, t_list **b);

void    rotate(t_list **t);
void    ra(t_list **a);
void    rb(t_list **b);
void    rr(t_list **a, t_list **b);

void    r_rotate(t_list **t);
void    rra(t_list **a);
void    rrb(t_list **b);
void    rrr(t_list **a, t_list **b);

void    push(t_list **x, t_list **y);
void    pa(t_list **a, t_list **b);
void    pb(t_list **a, t_list **b);

void    sort_v1(t_list **a, t_list **b, int *arr, int size);
void    back_to_a(t_list **a, t_list **b, int *arr, int e);
void    sort3(t_list **a);
void    sort5(t_list **a, t_list **b);
int     small_node(t_list *a);

#endif

