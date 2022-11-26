#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *tmp;
	char *a;
	tmp = malloc(3);
	a = tmp;
	*a++ = '1';
	*a++ = '2';
	*a = '\0';
	size_t len;
	len = strlen(tmp);
	printf("%s",tmp+len-1);
	return 0;
}
