/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:38:10 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/18 13:31:40 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = dst;
	source = (unsigned char *)src;
	i = 0;
	while (src && i < len)
	{
		((unsigned char *)dest)[i] = source[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main()
{
	unsigned char dest[] = "newstring";
	unsigned char src[] = "qwertyuiop";
	printf("%s", ft_memmove(dest, src, 5));
}
