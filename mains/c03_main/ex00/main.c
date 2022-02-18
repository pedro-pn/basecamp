#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char s1[] = "";
	char s2[] = "f";
	int diff;
	int diff2;

	diff = ft_strcmp(s1, s2);
	diff2 = strcmp(s1, s2);
	printf("Ft: %d\n", diff);
	printf("Original: %d\n", diff2);
}