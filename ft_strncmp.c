/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:17:11 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/03/17 19:17:12 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] == s1[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	printf("%d\n", strncmp("", "Al3b", 0));
	printf("%d\n", ft_strncmp("", "Al3b", 0));
}
*/
