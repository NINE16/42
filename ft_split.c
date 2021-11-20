/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:38:18 by nnemeth           #+#    #+#             */
/*   Updated: 2021/11/20 10:56:02 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	char		*s2;
	char		**tmp;
	int			words;

	i = 0;
	j = 0;
	words = ft_count(s, c) + 1;
	s2 = (char *)s;
	if (!s)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * ft_count((char *)s, c) + 1);
	while (words > 0)
	{
		while (s2[i] && i != c)
		{
			i++;
			if (i == c)
			{	
				ft_substr(s2, 0, i);
			}
		}
	}
	s2[j] = '\0';
	return ((char **)s2);
}

int	main(void)
{
	char	str[] = "Geeks-for-Geeks";
	char	c = '-';

	printf("%c\n", **ft_split(str, c));
}
