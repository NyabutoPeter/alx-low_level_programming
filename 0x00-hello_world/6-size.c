#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
char charType;
long int lType;
long long int llT;
float floatType;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lType));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llT));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
