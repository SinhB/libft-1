#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*res;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == ((char)(c)))
		{
			res = (char *) (s + i);
			return (res);
		}
		i++;
	}
	if ( (char)(c) == '\0')
	{
		res = (char *) (s + i);
		return (res);
	}
	return (0);
}
