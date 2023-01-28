#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str);

static int	ft_check(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int	i;
	int	j;
	int	k;

	k = 0;
	j = ft_strlen(s1);
	i = 0;
	
	while (s1[k] && ft_check(s1[k], set))
		k++;
	while (j > k && ft_check(s1[j - 1], set))
		j--;
	res = (char*)malloc(sizeof(*s1) * (j - k + 1));
	if (!res)
		return(NULL);
	
	while (k < j)
	{
		res[i] = s1[k];
		i++;
		k++;
	}

	res[i] = 0;
	return (res);
}

int	main()
{
	char const s1[] = "may the force be with you";
	char const set[] = "c";
	printf("%s", ft_strtrim(s1, set));
}

