#include <stdlib.h>
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
//	char *res;
	unsigned int	i = 0;

//	i = 0;
	char *res = (char *)malloc(sizeof(len));
	if (res == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		((char *)res)[i] = s[start];
		i++;
		start++;
		
	}
	return (res);
}
