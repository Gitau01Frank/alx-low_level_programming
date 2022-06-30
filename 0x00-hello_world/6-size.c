#include <stdio.h>

int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of doubleType: %ld bytes\n", sizeof(doubleType));
	printf("Size of charType: %ld bytes\n", sizeof(charType));
	return (0);
}
