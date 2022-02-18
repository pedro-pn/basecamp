#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int number;

	number = ft_atoi("45612");
	printf("%d", number);
}