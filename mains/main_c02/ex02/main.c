#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char *str = "";
	int retorno;

	retorno = ft_str_is_alpha(str);
	printf("%d", retorno);
}
