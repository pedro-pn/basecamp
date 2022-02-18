#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str[40] = "FDDSKJDKSJKDKASDASPKDJDPKLSDPK(*2392";
	int counter = 0;

	ft_strlowcase(str);
	while (str[counter])
	{
		printf("%c", str[counter]);
		counter++;
	}
}
