/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:53:12 by nnemeth           #+#    #+#             */
/*   Updated: 2021/11/11 18:23:11 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (small[j] != '\0')
	{
		while (big[i] && i < len)
		{
			if (big[i] != small[j])
			{
				i++;
				j = 0;
			}
			if ((big[i] == small[j]) && (i < len))
			{
				i++;
				j++;
				return ((char *)(big + i));
			}
		}
	}
	if (small[j] == '\0')
		return ((char *)big);
	else
		return (0);
}
/*int main ()
{
	char* s1 = "see FF your FF return FF now FF";
	char* s2 = "FF";
	size_t size = 20;

	printf("%s\n", ft_strnstr(s1,s2,size));
	printf("%s", strnstr(s1,s2,size));
}*/
