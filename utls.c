/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utls.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:28:05 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/19 18:16:51 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int	*sorarr(int *arr, int size)
{
	int	j;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		if (arr[j] < arr[i])
		{
			ft_swap(&arr[j], &arr[i]);
			i = 0;
		}
		else
			i++;
	}
	return (arr);
}

int	*sorted(t_list *a)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	j = ft_lstsize(a);
	arr = malloc(sizeof(int) * j);
	if (!arr)
		return (NULL);
	while (a)
	{
		arr[i] = a->content;
		a = a->next;
		i++;
	}
	arr = sorarr(arr, j);
	return (arr);
}
