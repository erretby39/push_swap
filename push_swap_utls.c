/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:52:26 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/28 21:40:33 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkargs(char *av)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (av[i])
	{
		if (!((av[i] >= '0' && av[i] <= '9') || av[i] == ' ' || av[i] == '+'
				|| av[i] == '-'))
			return (0);
		if ((av[i] >= '0' && av[i] <= '9'))
			r = 1;
		if (av[i] == '+' || av[i] == '-')
		{
			if (i)
			{
				if (av[i - 1] != ' ')
					return (0);
			}
			if (!(av[i + 1] >= '0' && av[i + 1] <= '9'))
				return (0);
		}
		i++;
	}
	return (r);
}

void	fill_stack(t_list **a, char **av)
{
	int		i;
	int		j;
	char	**args;

	j = 1;
	while (av[j])
	{
		if (!ft_checkargs(av[j]))
			(ft_lstclear(a), write(2, "Error\n", 6), exit(1));
		args = ft_split(av[j], ' ');
		i = 0;
		while (args[i])
		{
			ft_lstadd_back(a, ft_lstnew(ft_atoi(args[i], args, a)));
			if (chek_dup(*a) == 0)
				ft_erreo(a, args);
			i++;
		}
		ft_freee(args);
		j++;
	}
}

long	ft_atoi(const char *nb, char **args, t_list **a)
{
	int		i;
	int		j;
	long	k;

	i = 0;
	j = 1;
	k = 0;
	while ((nb[i] == 32) || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			j *= -1;
		i++;
	}
	while (nb[i] >= 48 && nb[i] <= 57)
	{
		k = k * 10 + (nb[i] - 48);
		if (k >= 2147483648 || k <= -2147483647)
			ft_erreo(a, args);
		i++;
	}
	return (j * k);
}
