#include <stdio.h>


char	*ft_strncpy(char *dest, char *arc, unsigned int n);

int	main(void)
{
	char a[38] = "KEASKapkASdasddfgdsfdfrdfrwadasdfawas";
	char b[45];
	int counter;
	unsigned int c;

	c = 3;
	counter = 0;
	ft_strncpy(b, a, c);
	while (b[counter])
	{
		printf("%c", b[counter]);
		counter++;
	}
}

