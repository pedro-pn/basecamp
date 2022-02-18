#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
int	main(void)
{
	int tab[13] = {20, 30, 40, 50, 60, 70, 80, 90, 55, 10, 50, 300, 86};
	int i;
	int tamanho;

	tamanho = 13;
	i = 0;
	while (i < tamanho)
    {
		printf("%d\t", tab[i]);
        i++;
    }
	i = 0;
	printf("\n");
	ft_rev_int_tab(tab, tamanho);
	while (i < tamanho)
    {
		printf("%d\t", tab[i]);
        i++;
    }
}