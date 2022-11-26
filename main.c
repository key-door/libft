#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int	i;
	int	len;

	len = 0;
	i = -2147483648;
	while (1)
	{
		i = i / 10;
		len++;
		if (!i)
			break ;
	}
	printf("%d\n", len);
}
