#include <string.h>
#include <stdio.h>
char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	printf("ref : %s\n", strdup(argv[1]));
	printf("test : %s\n", ft_strdup(argv[1]));
}
