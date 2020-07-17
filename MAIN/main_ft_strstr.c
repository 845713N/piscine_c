#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int i_t;
    int occurrence;


    i = 0;
    i_t = 0;
    occurrence = 0;
    if (!to_find[0])
	return (str);
    while (str[i])
	{
	    i_t = 0;
	    while (str[i + i_t] == to_find[i_t] && to_find[i_t])
		i_t++;
	    if (!to_find[i_t])
		return (&str[i]);
	    else
		i++;
	}
    return (0);
}
int	main()
{
    char str[] = "tructrucbonjourmachin";
    printf("%s\n", strstr(str,"bonjour"));
    printf("%s\n", ft_strstr(str,"bonjour"));
}
