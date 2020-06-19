#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_numbers()
{
	char ch = '0';
	while(ch <= '9')
	{
		ft_putchar(ch);
		ch++;
	}
}
