#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int	main(int ac, char **av)
{
	int i;

	i = 0;
	(void)ac;
	while (i < atoi(av[2]) - atoi(av[1]))
		printf("%d\n", ft_range(atoi(av[1]), atoi(av[2]))[i++]);
}
