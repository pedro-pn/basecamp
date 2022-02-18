#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char *s1 = "Tes";
	char *s2 = "Teste";
	unsigned int n = 4;
	int diff;
	int diff2;


	diff = ft_strncmp(s1, s2, n);
	diff2 = strncmp(s1, s2, n);
	printf("FT: %d\n", diff);
	printf("Original: %d\n", diff2);
}