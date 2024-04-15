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
	void		*ptr;
	size_t	i;
	
	ptr = malloc(nmemb * size);
	i = 0;
	while (i < nmemb * size)
	{
		((int *)ptr)[i++] = 0;
	}
	return (ptr);
}

// int main()
// {
// 	int *a = (int *)ft_calloc(1, sizeof(int));
// 	printf("%d\n", *a);
// 	free(a);
// }
