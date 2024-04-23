/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:50:58 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/03/18 14:50:59 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h> // compile with flag -lbsd 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack;
	char	*needle;

	
	haystack = (char *)big;
	needle = (char *)little;
	if (*little == '\0')
		return (haystack);
	i = -1;
	while (haystack[++i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i] && needle[j])
		{
//			printf("Compared %c, j = %zu \n", needle[j], j);
			j++;
			i++;
		}
		if (needle[j] == 0 || j == len)
			return (haystack + i - j);
	}
	return (NULL);
}

#include <limits.h>

int main()
{
	int	i = INT_MIN;
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	//achar * empty = (char*)"";
	/* 1 */ printf("%s\n", ft_strnstr(haystack, needle, 0));
	/* 2 */ printf("%s\n", ft_strnstr(haystack, needle, -1));
	ft_putnbr_fd(i, 1);
}

