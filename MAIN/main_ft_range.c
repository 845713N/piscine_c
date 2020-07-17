#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int	main(int ac, char **av)
{
	int i;
	int *temp;
	int min = atoi(av[1]);
	int max = atoi(av[2]);

	temp = ft_range(min, max);
	i = 0;
	(void)ac;
	while (i < max - min)
		printf("%d\n", temp[i++]);
}
