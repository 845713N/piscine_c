#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	if (open ("./dirct", O_RDONLY) == -1)
	{
		write(1, "NO\n", 3);
	}
	else
		write(1, "ERROR\n", 4);
	return (0);
}
