#include<stdio.h>
/**
 * main - Entry point
 * Description: 'main description'
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of char:%d Baytes", sizeof(char));
	printf("size of int:%d Bayted", sizeof(int));
	printf("size of long int: %dbaytes", sizeof(long int));
	printf("size of lon long int: %d baytes", sizeof(long long int));
	printf("size of float: %d baytes", sizeof(float));
	return (0);
}
