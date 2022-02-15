#include <stdio.h>
#include <bsd/string.h>
#include "ft_strlcat.c"
//unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	// char *src = "Teste";
	// char dest[5] = "";
	char *src2 = "11236";
	char dest2[5] = "1123";
	unsigned int n = 3;
	int length;

	// length = ft_strlcat(dest, src, n);
	// printf("Minha: %d\n", length);
	// printf("Minha: %s\n", dest);
	printf("==================\n");
	length = strlcat(dest2, src2, n);
	printf("Original: %d\n", length);
	printf("Original: %s\n", dest2);

}