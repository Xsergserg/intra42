#include <stdio.h>

char *ft_megaswap (char *str)
{
	int size;
	int i;
	int end;
	char tmp;

	size = 0;
	i = 0;
	
	while (str[size] != '\0')
		size++;

	size -= 1;
	end = size;

	while (size / 2 >= i)
		{
			tmp = str[i];
			str[i] = str[end];
			str[end] = tmp;
			i++;
			end--;
		}
		return (str);
}

int main (void)
{
	char line[] = "abc1def";
	printf("%s", ft_megaswap(line));
	return (0);
}