/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:21:42 by rbordin           #+#    #+#             */
/*   Updated: 2023/02/01 12:57:45 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		k;

	k = ft_strlen(s1) + 1;
	i = 0;
	s2 = (char *)malloc(k);
	if (!s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		((char *)s2)[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
