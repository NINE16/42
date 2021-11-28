/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:53:12 by nnemeth           #+#    #+#             */
/*   Updated: 2021/11/28 17:44:17 by nnemeth          ###   ########.fr       */
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
	if (!small || small[0] == '\0')
		return ((char *) big);
	if (!big || !small)
		return (0);
	while (big[i] && i < len)
	{	
		j = 0;
		while (big[i + j] && small[j] && (i + j < len) && big[i + j] == small[j])
			j++;
		if (!small[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	char* s1 = "see FF your FF return FF now FF";
// 	char* s2 = "FF";
// 	size_t size = -1;

// 	printf("%s\n", ft_strnstr(s1,s2,size));
// 	printf("%s", strnstr(s1,s2,size));
// }
