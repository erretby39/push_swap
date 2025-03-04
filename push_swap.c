/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:58:33 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/28 21:34:37 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list	*trash;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	fill_stack(&a, av);
	if (chek_sorte(a) == 1)
		return (ft_lstclear(&a), 0);
	if (ft_lstsize(a) <= 3)
		sort3(&a);
	else if (ft_lstsize(a) <= 5)
		sort5(&a, &b);
	else
		sort_v1(&a, &b, sorted(a), ft_lstsize(a));
	while (a)
	{
		trash = a;
		a = a->next;
		free(trash);
	}
}
