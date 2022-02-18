#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char *str = "A2Z";
	int retorno;

	retorno = ft_str_is_uppercase(str);
	printf("%d", retorno);
}
