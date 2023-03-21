#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d yte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
