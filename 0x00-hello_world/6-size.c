#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integerType;
	float floatType;
	long int long intType;
	char charType;
	long long int long long intType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of long intType: %ld bytes\n", sizeof(long intType));
	printf("Size of charType: %ld bytes\n", sizeof(charType));
	printf("Size of long long intType: %ld bytes\n", sizeof(long long intType));
	return (0);
}
