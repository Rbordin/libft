/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:38:10 by rbordin           #+#    #+#             */
/*   Updated: 2023/02/01 15:42:31 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = dst;
	source = (char *)src;
	if (!src && !dst)
		return (NULL);
	while (i < len)
	{
		if (dest[i] == source[i])
			i++;
		((char *)dst)[i] = source[i];
		i++;
	}
	return (dest);
}
