#include "holberton.h"
/**
*is_prime_number - prime number
*@n: Variable
*/
int is_prime_number(int n)
{
int i = 2;
if (n <= 2)
return (n == 2);
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (is_prime_number(n));
}
