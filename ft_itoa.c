
#include <stdlib.h>
#include <stdio.h>

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		count /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	j;
	int	i;
	j = ft_count(n);
	i = j;

	res = (char *)malloc(sizeof (char) * (j + 1));
	if (!res)
		return (NULL);
	while (j > 0)
	{
		if (n > 9)
		{
			((char *)res)[j] = (n % 10) + 48;
			j--;
		}
		else
			((char *)res)[j] = n + 48;
	}
	((char *)res)[i + 1] = '\0';
	return (res);
}

int	main()
{
	printf("%s", ft_itoa(4567));

}
