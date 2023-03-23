#include"main.h"
/**
 * positive_or_negative - is function that evaluate number +ve or -ve
 * values
 * @i: is parameter which is tobe evvaluasted
 */
void positive_or_negative(int i)
{
	if  (i > 0)
		printf("%d is posetive number\n", i);
	else if (i < 0)
		printf("%d is negative nummber\n", i);
	else
		printf("%d is Zero\n", i);
}
