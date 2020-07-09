#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int i_t;
    int occurrence;
    //char *new_str;

    i = 0;
    i_t = 0;
    occurence = 0;
    if (!to_find[0])
	return (str);
    while (str[i])
	{
	    i_t = 0;
	    while (str[i] == to_find[i_t] && to_find[i_t])
		{
		    i_t++;
		    i++;
		}
	    if (to_find[i_t] == "\0")
		return (&str[i]);
	    else
		i++;
	}
    return ("\0");
}
int	main()
{
    char str[] = "Bonjour";
    printf("%s\n", ft_strstr(str,"Bonjour"));
}
