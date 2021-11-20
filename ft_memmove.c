/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:32:51 by nnemeth           #+#    #+#             */
/*   Updated: 2021/11/13 13:21:20 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h> 

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*source;
	char	*dest;

	dest = (char *) dst;
	source = (char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0 )
		{
			dest[i] = source[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

// int main ()
// {
//    char dest[] = "mostannoying";
//    const char src[]  = "newstring";

//    printf("memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 8);
//    printf("memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }
