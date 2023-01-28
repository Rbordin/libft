/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:21:42 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/20 15:47:24 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int	i;
	int	k;

	k = ft_strlen(s1);
	i = 0;
	s2 = ft_calloc(k, (k * sizeof(char)));
	while (s1[i] != '\0')
	{
		((char*)s2)[i] = s1[i];
		i++;
	}
	return (s2);
}
