#include <stdlib.h>
int	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int	i;
	int	j;

	j = 0;
	i = 0;
	s3 = (char *)malloc(sizeof(ft_strlen(s1) + ft_strlen(s2)));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		((char *)s3)[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		((char *)s3)[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
