#include <stdio.h>
char	**ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char **result = ft_split(av[1], av[2]);
	(void)ac;
	while (result[i])
	{
		printf("%s", result[i]);
		printf("\n");
		i++;
		j = 0;
	}
	free(result);
}
