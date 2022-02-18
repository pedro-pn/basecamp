#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char s1[11] = "teste";
	char s2[11] = "folha";
	char *resultado;

	//resultado = strcat(s1, s2);
	resultado = ft_strcat(s1, s2);
	resultado[3] = '5';
	printf("%s\n", s1);
	printf("%s\n", resultado);
}