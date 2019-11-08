#include <stdio.h>
/**
* print_binary - Write a function that prints the binary representation
* @n: the number
*/
void print_binary(unsigned long int n)
{
if (n >= 1)
{
	print_binary(n >> 1);
	printf("%lu", n & 1);
}
}
