#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *tmp;
	unsigned char ch;

	if(!s)
		return NULL;		
	tmp = (unsigned char *)s;
	ch = (unsigned char)c;
	while(n--)
		*tmp++ = ch;	
	return (void *)s;	
}

