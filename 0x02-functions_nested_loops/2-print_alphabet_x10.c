#include "holberton.h"
/**
 *print_alphabet_x10 - prints alpabeth  10
 *
 *Return:
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
int alpabeth;
for (alpabeth = 'a'; alpabeth <= 'z'; alpabeth++)
{
_putchar(alpabeth);
}
_putchar("\n");
i++;
}
return;
}
