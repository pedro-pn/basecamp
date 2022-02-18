#include <stdio.h>


char	*ft_strcpy(char *dest, char *arc);

int	main(void)
{
	char a[38] = "KEASKapkASdasddfgdsfdfrdfrwadasdfawas";
	char b[38];
	int counter;

	counter = 0;
	ft_strcpy(b, a);
	while (b[counter])
	{
		printf("%c", b[counter]);
		counter++;
	}
}

