/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:49:01 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 00:42:57 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstendex(t_list *a, int x)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		if (a->content == x)
			return (i);
		i++;
		a = a->next;
	}
	return (-1);
}

void	back_to_a(t_list **a, t_list **b, int *arr, int e)
{
	int	i;

	i = ft_lstsize(*b);
	while (*b)
	{
		if ((*b)->content == arr[e])
		{
			pa(a, b, 0);
			e--;
			i = ft_lstsize(*b);
		}
		else if (ft_lstendex(*b, arr[e]) <= (i / 2))
			rb(b, 0);
		else
			rrb(b, 0);
	}
	free(arr);
}

void	range_up(int *s, int *e, int *rang, int size)
{
	(void)rang;
	if (*s < *e)
		*s = *s + 1;
	if (*e < size - 1)
		*e = *e + 1;
}

int	get_rang(t_list **a)
{
	if (ft_lstsize(*a) <= 18)
		return (3);
	else if (ft_lstsize(*a) <= 100)
		return (6);
	else if (ft_lstsize(*a) <= 500)
		return (12);
	else
		return (18);
}

void	sort_v1(t_list **a, t_list **b, int *arr, int size)
{
	int	rang;
	int	s;
	int	e;

	rang = size / get_rang(a);
	s = 0;
	e = rang;
	while (*a)
	{
		if ((*a)->content <= arr[s])
		{
			pb(a, b, 0);
			if ((*b)->next != NULL)
				rb(b, 0);
			range_up(&s, &e, &rang, size);
		}
		else if ((*a)->content <= arr[e])
		{
			pb(a, b, 0);
			range_up(&s, &e, &rang, size);
		}
		else
			ra(a, 0);
	}
	back_to_a(a, b, arr, e);
}
