#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char *str = "";
	int retorno;

	retorno = ft_str_is_numeric(str);
	printf("%d", retorno);
}
