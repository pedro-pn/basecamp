#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char *str = "74t65";
	int retorno;

	retorno = ft_str_is_lowercase(str);
	printf("%d", retorno);
}
