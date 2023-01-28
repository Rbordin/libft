/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:29:51 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/20 09:33:10 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)&s1[i]);
	while (s1[i] != '\0' && s2[j] != '\0' && i <= len)
	{
		if (s1[i + j] == s2[j])
		{
			res = ((char *)&s1[i + j]);
			while (s1[i + j] == s2[j])
			{
				j++;
				if (s2[j] == '\0')
					return (res);
			}
		}
		i++;
	}
	return (NULL);
}
