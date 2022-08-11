#include <unistd.h>

int strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_rev_print(char *str)
{
	int i;

	i = strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[1][i],1);
		i--;
	}
	return (str);
}
