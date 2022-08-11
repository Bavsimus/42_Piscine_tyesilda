#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int miss;

	miss = *a;
	*a = *b;
	*b = miss;
}	
