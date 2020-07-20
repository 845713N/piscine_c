#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max);

int	main(int ac, char **av)
{
	(void)ac;
	int **tab;
	tab = 0;
	int size;
	size = ft_ultimate_range(tab, atoi(av[1]), atoi(av[2]));
	printf("%d\n", size);
	free(tab);
}
