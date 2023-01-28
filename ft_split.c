#include <stdio.h>
#include <stdlib.h>


char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	*str;

	i = 0;
	while (s)
	{
		if (s[i] == c)
		{
			str = (char*)malloc(sizeof((*s) - i - j));
			j = i + 1;
			while (s[j] != c || s[j] != '\0')
			{
				str[j] = s[j];
				j++;
			}
			return(&res);
		}
		i++;
	}
	return(&s);
}

int	main()
{
	char const s[] = "qwertyuiop";
//	char d[] = "t";
	printf("%s", *ft_split(s));
}
