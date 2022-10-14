#include <stdio.h>

/**
 *main - print all numbers of base 16 in lowercase followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	int a_to_f = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (a_to_f <= 'f') /*print a-f to complete the hexadecimals*/
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
	
}
