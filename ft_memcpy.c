#include "libft.h"

void 	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*tmp;
	int  	*c;

	if(dest == src || n == 0)
		return dest;
	tmp = dest;
	c = (int *)src;
	while(n--)
		ft_memset(dest++, *c++, 1);
	return (tmp);
}

