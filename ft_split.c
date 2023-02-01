/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:19:30 by rbordin           #+#    #+#             */
/*   Updated: 2023/02/01 14:59:35 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

char	*ft_strtrim(char const*s1, char const *set);

int	ft_count_index(char const *s, char c)
{
	int		i;
	int		count;
	char	*new;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	new = ft_strtrim(s, &c);
	while (new[i] != '\0')
	{
		if (new[i] == c)
		{
			while (new[i + j] == c)
				j++;
			count += 1;
		}
		i = i + j;
		i++;
	}
	return (count);
}

int	ft_new_strlen(char const *s, char c, int j)
{
	int		i;
	char	*new;

	new = ft_strtrim(s, &c);
	i = j;
	if (!s || c == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (new[i] == c)
			return (i - j);
		i++;
	}
	if (new[i] == '\0')
		return (i - j);
	return (0);
}

char	*ft_substring(char const *s, int len, int j, char c)
{
	char	*res;
	int		i;
	char	*new;
	
	new = ft_strtrim(s, &c);
	i = 0;
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	while (new[j] != '\0' && i < len)
	{
		if (new[j] == ' ' || new[j] == '\t' || new[j] == '\n')
		{
			if (c == ' ' || c == '\t' || c == '\n')
				j++;
		}
		((char *)res)[i] = new[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	static int	j;
	char		**matrix;
	int			len;
	int			nrows;
	
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	nrows = ft_count_index(s, c);
	matrix = (char **) malloc (nrows + 2 * sizeof (char *));
	if (!matrix)
		return (NULL);
	while (i < nrows + 2)
	{
		len = ft_new_strlen(s, c, j);
		matrix[i] = malloc (len + 1 * sizeof (char *));
		if (!matrix[i])
			return (NULL);
		matrix[i] = ft_substring(s, len, j, c);
		i++;
		j += len + 1;
	}	
	matrix[nrows + 1] = NULL;
	return (matrix);
}
