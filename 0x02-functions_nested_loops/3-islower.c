#include"main.h"
/**
 * _islower - display 1 if character is lower and 0 else
 * Return: 1 if the char is lower 0 else
 * @c: parameter tobe printe
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
