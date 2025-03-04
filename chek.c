/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chek.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 00:36:17 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 01:01:19 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chek_sorte(t_list *a)
{
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

int	chek_dup(t_list *a)
{
	t_list	*chek;

	while (a->next)
	{
		chek = a->next;
		while (chek)
		{
			if (a->content == chek->content)
				return (0);
			chek = chek->next;
		}
		a = a->next;
	}
	return (1);
}

void	ft_erreo(t_list **a, char **arr)
{
	write(2, "Error\n", 6);
	ft_freee(arr);
	ft_lstclear(a);
	exit(1);
}
