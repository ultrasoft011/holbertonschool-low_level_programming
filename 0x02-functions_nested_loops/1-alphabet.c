#include "holberton.h"
/**
 * print_alphabet(void) - prints the alphabet
 *
 * Return: null
 */
void print_alphabet(void)
{
int alx;
for (alx = 'a'; alx <= 'z'; alx++)
{
_putchar(alx);
}
_putchar('\n');
return;
}
