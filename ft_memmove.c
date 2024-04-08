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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	void	*temp;
	
	i = 0;
	while (i < n)
	{
		*temp = *src++;
		dest[i++] = *temp;
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
