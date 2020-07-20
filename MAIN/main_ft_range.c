#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max);

int	main(int ac, char **av)
{
	int i = 0;

	(void)ac;
	int *tab = ft_range(atoi(av[1]), atoi(av[2]));
	while (i <= atoi(av[2]) - atoi(av[1]))
		printf("%d\n", tab[i++]);
	free(tab);
}
