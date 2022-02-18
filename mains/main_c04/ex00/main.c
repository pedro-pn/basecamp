#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char *str = "abac   axi";
	int tamanho;

	tamanho = ft_strlen(str);
	printf("O tamanho é: %d: ", tamanho);
}