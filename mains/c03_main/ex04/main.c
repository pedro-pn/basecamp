#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char s2[] = "te";
	char s1[] = "Teste str";
	char *ptr;

	//ptr = strstr(s1, s2);
	ptr = ft_strstr(s1, s2);
	//ptr[4] = 'n';
	//ft_strncat(s1, s2, n);
	printf("%s", ptr);
	//printf("%s", s1);
}