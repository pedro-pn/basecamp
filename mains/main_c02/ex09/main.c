#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[120] = "0aaaf a character passed to isprint() is a printable character, it returns non-zero integer, if not it returns 0.";
	int counter = 0;

	ft_strcapitalize(str);
	while (str[counter])
	{
		printf("%c", str[counter]);
		counter++;
	}
}

#include <stdio.h>

int main(void)
{
	char str[120] = "0aaaf a character passed to isprint() is a printable character, it returns non-zero integer, if not it returns 0.";
	int counter = 0;

	ft_strcapitalize(str);
	while (str[counter])
	{
		printf("%c", str[counter]);
		counter++;
	}
}
