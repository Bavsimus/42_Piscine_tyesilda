#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_rev_print(char *str)
{
	int j;

	j = ft_strlen(str);
	j--;
	while (j >= 0)
	{
		write(1, &str[i],1);
		i--;
	}
	return (str);
}
