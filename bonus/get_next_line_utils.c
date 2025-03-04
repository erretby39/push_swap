/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:03:59 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 00:57:17 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		total;
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(total * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst != src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *)malloc((len + 1) * (sizeof(char)));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}
