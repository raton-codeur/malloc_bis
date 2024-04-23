
// --- main.h :
#include "libft.h"
void	*malloc_bis(size_t n);
#define malloc(n) malloc_bis(n)
// ---


int main()
{
	int *a = malloc(1);
	if (a == NULL)
	{
		printf("fail index 0\n");
		return (1);
	}
	int *b = malloc(1);
	if (b == NULL)
	{
		free(a);
		printf("fail index 1\n");
		return (1);
	}
	free(a);
	free(b);
	return (0);
}
