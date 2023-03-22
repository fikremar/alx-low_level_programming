#include"main.h"
/**
 * print_alphabet_x10 - print low character
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	char j;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
