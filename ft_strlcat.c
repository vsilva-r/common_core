/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:51:11 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/03/18 14:51:12 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h> // compile with flag -lbsd 

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	
	i = 0;
	while (src[i] && i < size)
		i++;
	src_len = i;
	i = 0;
	while (dest[i++])
		;
	dest_len = i - 1;
	i = 0;
	while (dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}
/*
int main() // putting null bytes on dest wtf TIREI PAUSA DESTA MERDA
{	
	char src[] = " World";
	char dest[] = "Hello";
	unsigned int size = 8;
	printf("%i, %u\n%s\n", size, ft_strlcat(dest, src, size), dest);
	//printf("%i, %s\n", size, dest);
}
*/

// dst = ACBDEFASD\0-------
// src = 12341323\0
// pos = ACBDEFASD12341\0
