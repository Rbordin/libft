#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*s1;
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s1 = (char *)malloc(ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
