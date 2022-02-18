#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str[40] = "tes#te testos0 tes!tado";
	int counter = 0;

	ft_strupcase(str);
	while (str[counter])
	{
		printf("%c", str[counter]);
		counter++;
	}
}
