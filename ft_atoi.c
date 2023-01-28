/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:42:33 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/20 10:28:40 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '\t')
			i++;
		while (str[i] >= 48 && str[i] <= 57)
		{
			j = (j * 10) + (str[i] - 48);
			i++;
			if (str[i] < 48 || str[i] > 57)
				return ((int)(j));
		}	
	i++;
	}
	return (0);
}
