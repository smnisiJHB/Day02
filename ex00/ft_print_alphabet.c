#include <stdio.h>

void ft_print_alphabet();
int main()

{
	ft_print_alphabet();
		return 0;

}

void ft_print_alphabet()
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z' ;ch++)
			putchar(ch);
}	
