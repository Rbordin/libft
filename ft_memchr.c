/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:46:45 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/19 18:32:51 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	p;
	char			*str;

	str = ((char *)s);
	i = 0;
	p = c;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] != p)
			i++;
		else
			return ((void *)&str[i]);
	}
	return (NULL);
}
