/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:31:55 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/03/04 20:31:59 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char	*temp;
	char	*d;
	
	temp = malloc(sizeof(char));
	d = dest;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*temp = *(char *)src++;
		d[i++] = *(char *)temp;
	}
	return (dest);
}

/*
#include <stdio.h>

int main()
{	
	int c =	ft_strlen("This string has ? characters");

	printf("%d chars", c);
}
*/
