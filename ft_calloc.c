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
	size_t	i;
	
	loc = malloc(nmemb * size);
	i = 0;
	while (i < nmemb * size)
	{
		((int *)loc)[i++] = 0;
	}
	return (loc);
}
