/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilva-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:32:22 by vsilva-r          #+#    #+#             */
/*   Updated: 2024/04/24 11:32:31 by vsilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		array_size;

	array_size = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (*(s + 1) == c)
			{
				s++;
				continue;
			}
			array_size += 1;
		}
	}
	array = ft_calloc(
	*/
