/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:15:21 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/04/09 10:15:23 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*loc;
	
	if (size <= 0)
		return (NULL);
	loc = malloc(nmemb * size);
	if (loc == NULL)
		return (NULL);
	ft_memset(loc, 0, nmemb * size);
	return (loc);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", (char *)ft_calloc(3, -5));
}
*/
