#include <stdio.h>

/**
 *main - print lowercase and uppercase alphabets followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';

	char upper = 'A';

	while (lower <= 'z') /*print lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*print uppercase A-Z*/
	{
		putchar(upper);
		upper++
	}
	
	putchar('\n');

	return (0);
}
