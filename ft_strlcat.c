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

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h> // compile with flag -lbsd 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	
	i = 0;
	while (src[i] && i < size)
		i++;
	src_len = i;
	i = 0;
	while (dst[i++])
		;
	dest_len = i - 1;
	i = 0;
	while (dest_len + i < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dest_len + src_len);
}
/*
int main() // putting null bytes on dst wtf TIREI PAUSA DESTA MERDA
{	
	char src[] = " World";
	char dst[] = "Hello";
	unsigned int size = 8;
	printf("%i, %u\n%s\n", size, ft_strlcat(dst, src, size), dst);
	//printf("%i, %s\n", size, dst);
}
*/

// dst = ACBDEFASD\0-------
// src = 12341323\0
// pos = ACBDEFASD12341\0
