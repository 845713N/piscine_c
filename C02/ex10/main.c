#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	int len = 4;
	char dst[] = "Salut";
	char src[] = "Bonj";

	printf("%s\n %lu\n", dst, strlcpy(dst, src, len));
	printf("%s\n %d\n", dst, ft_strlcpy(dst, src, len));
}
