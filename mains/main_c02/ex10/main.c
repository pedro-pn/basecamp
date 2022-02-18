#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char str[10] = "oimeuanjos";
	char dest[5];
	int counter;
	int retorno;
	unsigned int c;

	counter = 0;
	c = 2;
	retorno = ft_strlcpy(dest, str, c);
	while (dest[counter])
	{
		printf("%c", dest[counter]);
		counter++;
	}
	printf("\n");
	printf("%d", retorno);
}