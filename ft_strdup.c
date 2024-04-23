/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:16:28 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/03/19 12:16:30 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = ft_strlen(s);
//	printf("%d LOL\n", i);
	dest = (char *)ft_calloc(i, sizeof(char));
//	printf("OK? 1\n");
	while (--i >= 0)
	{
	//	printf("OK? 2\n");
		dest[i] = s[i];
	//	printf("%s\n", dest+i);
	}
//	printf("OK? 3\n");
	return (dest);
}
/*
int	main()
{
	char	*str = "asdfghjkl;lkjhgfdsertyjnbvftyjkiuhgfrtyji876trfvbnjkiuytg";
	char	*ptr = ft_strdup(str);
	printf("%p : %s\n", str, str);
	printf("%p : %s\n", ptr, ptr);
	free(ptr);
}
*/
