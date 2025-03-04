/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:10:01 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 02:03:55 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i] || !s1[i] || !s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static void	ft_erreo_bonus(t_list **a, t_list **b, char *move)
{
	write(2, "Error\n", 6);
	free(move);
	ft_lstclear(a);
	ft_lstclear(b);
	exit(1);
}

int	ft_moves(t_list **a, t_list **b, char *move)
{
	if (!ft_strcmp(move, "pa\n"))
		pa(a, b, 1);
	else if (!ft_strcmp(move, "pb\n"))
		pb(a, b, 1);
	else if (!ft_strcmp(move, "sa\n"))
		sa(a, 1);
	else if (!ft_strcmp(move, "sb\n"))
		sb(b, 1);
	else if (!ft_strcmp(move, "ss\n"))
		ss(a, b, 1);
	else if (!ft_strcmp(move, "ra\n"))
		ra(a, 1);
	else if (!ft_strcmp(move, "rb\n"))
		rb(b, 1);
	else if (!ft_strcmp(move, "rr\n"))
		rr(a, b, 1);
	else if (!ft_strcmp(move, "rra\n"))
		rra(a, 1);
	else if (!ft_strcmp(move, "rrb\n"))
		rrb(b, 1);
	else if (!ft_strcmp(move, "rrr\n"))
		rrr(a, b, 1);
	else
		ft_erreo_bonus(a, b, move);
	return (1);
}

int	ft_res(t_list **a, t_list **b)
{
	if ((*b))
	{
		write(1, "KO\n", 3);
		ft_lstclear(a);
		ft_lstclear(b);
		return (1);
	}
	if (chek_sorte(*a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(a);
	ft_lstclear(b);
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*move;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	if (ac == 1)
		return (0);
	fill_stack(&a, av);
	move = get_next_line(0, i);
	while (move)
	{
		i = ft_moves(&a, &b, move);
		free(move);
		move = get_next_line(0, i);
	}
	return (ft_res(&a, &b));
}
