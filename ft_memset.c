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

#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{

	printf("mee");
	int	i;
	int	*p;
	
	p = s;
	i = 0;
	while (n--)
	{
		p[i++] = c;
		printf("Meke");
	}
	return (s);
}


int main()
{	
	char	*a = "sq ";
	
	ft_memset(a, '0', 0);
	write(1, a, 3);
	
	//write(1, ft_memset(a, '0', 1), 2);
}

