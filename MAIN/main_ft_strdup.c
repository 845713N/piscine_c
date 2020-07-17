#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	char *temp;

	temp = ft_strdup(argv[1]);
	(void)argc;
	//printf("ref : %s\n", strdup(argv[1]));
	printf("test : %p\n", argv[1]);
	printf("test : %s\n", temp);
	free(temp);
	printf("test : %s\n", temp);
	return (0);
}
