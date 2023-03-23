#include"main.h"
/**
 * postitive_or_negative - is function that evaluate number +ve or -ve
 * values
 * @i: is parameter which is tobe evvaluasted
 */
void postitive_or_negative(int i)
{
	if  (i > 0)
		printf("%d is posetive number", i);
	else if (i < 0)
		printf("%d is negative nummber", i);
	else
		printf("%d is Zero", i);
}
