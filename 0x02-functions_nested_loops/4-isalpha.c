#include"main.h"
/**
 * _isalpha - is function
 *
 * @c : is parameter
 * Return: 1 for alphabet 0 else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
