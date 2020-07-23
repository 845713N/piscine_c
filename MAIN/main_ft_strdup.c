#include <stdio.h>

char	*ft_strdup(char *src);

int	main()
{
	char *str = "SYtC47OulK0klJzF";
	char *str2;

	str2 = ft_strdup(str);
	printf("init : %s -> %p\ncp   : %s -> %p\n", str,str,str2,str2);
}
