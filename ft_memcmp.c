/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:36:26 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/19 19:08:53 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char *ns1;
	char *ns2;

	i = 0;
	ns1 = ((char *)s1);
	ns2 = ((char *)s2);
	while ((ns1[i] != '\0' || ns2[i] != '\0') && i < n)
	{
		if (ns1[i] < ns2[i] || ns1[i] > ns2[i])
			return (ns1[i] - ns2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char s1[] = "qwaertyuiop";
	char s2[] = "qwertyui";
	printf("%d", ft_memcmp(s1, s2, 5));
}
