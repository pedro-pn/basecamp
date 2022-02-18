#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char s1[10] = "Teste";
	char s2[] = "folhaddf";
	char	*resultado;
	unsigned int n = 5;

	resultado = strncat(s1, s2, n);
	//resultado = ft_strncat(s1, s2, n);
	resultado[3] = '5';
	printf("%s\n", s1);
	printf("%s\n", resultado);
}