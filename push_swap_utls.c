/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:52:26 by soer-ret          #+#    #+#             */
/*   Updated: 2025/02/26 19:55:55 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkargs(char *av)
{
	int i = 0;
	int r = 0;
	while(av[i])
	{
		if (!((av[i] >= '0' && av[i] <= '9') \
			|| av[i] == ' ' || av[i] == '+' || av [i] == '-'))
			return 0;
		if((av[i] >= '0' && av[i] <= '9'))
			r = 1;
		if (av[i] == '+' || av [i] == '-')
		{
			if (i)
			{
				if (av[i - 1] != ' ')
					return 0;
			}
			if (!(av[i + 1] >= '0' && av[i + 1] <= '9'))
				return 0;
		}    
			i++;         
	}
	return r;
}

void	fill_stack(t_list **a, char **av)
{
	int i;
	int j;
	char **args;
	
	j = 1;
	while (av[j])
	{
		if (!checkargs(av[j]))
			(ft_lstclear(a), write(2, "Error1\n", 6),exit(1));
		args = ft_split(av[j], ' ');
		i = 0;        
		while (args[i])
		{
			ft_lstadd_back(a, ft_lstnew(ft_atoi(args[i])));
			// if (chek_dup(*a) == 0)
			// 	exit(1);
			i++;
		}
		free (args);
		j++;
	}
}

long	ft_atoi(const char *nb)
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
			exit(1);
		i++;
	}
	return (j * k);
}
