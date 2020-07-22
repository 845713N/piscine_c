#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int ac, char **av)
{
	char *sep = "+";
	int size = ac;
	char *string = ft_strjoin(size, av, sep);
	printf("%s\n", string);
}
