#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char *str = "";
	int retorno;

	retorno = ft_str_is_printable(str);
	printf("%d", retorno);
}
