#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static char	*ft_remalloc(char *str, int c)
// {
// 	char	*tmp;
// 	size_t	len;

// 	len = ft_strlen(str);
// 	tmp = (char *)malloc(sizeof(char) * (len + 2));
// 	if (!tmp)
// 		return (NULL);
// 	*tmp = (char)c;
// 	ft_strlcat(tmp + 1, str, len + 1);
// 	free(str);
// 	return (tmp);
// }

// int	main(int argc, char **argv)
// {
// 	char *a;
// 	char *tmp;

// 	a = ft_strdup("123");
// 	tmp= ft_remalloc(a,'a');
// 	printf("%s\n",tmp);
// 	return 0;
// }



int	main(int argc, char **argv)
{
	int		n;
	char	*a;

	n = -2147483648;
	a = ft_itoa(n);
	printf("%s\n", a);
	free(a);
}
