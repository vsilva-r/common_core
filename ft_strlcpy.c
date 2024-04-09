/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:59:52 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/03/10 18:00:21 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main()
{
	char src[] = "Fucking";
	char dest[] = "Shit";
//	char *destp = dest;

	printf("%p Dest\n%p Src\n", dest, src);
	
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", dest);
	
//	while (destp != src + 30)
//	{
//		printf("%c", *(destp++));
//	}
}
*/
