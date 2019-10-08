#include "holberton.h"
/**
 *print_chessboard - prints a chessboard
 *@a: Pointer to a
 *Return: 0
 */
void print_chessboard(char (*a)[8])
{
int irow = 0;
int jcol = 0;
for (irow = 0; irow <= 7; irow++)
{
for (jcol = 0; jcol <= 7; jcol++)
{
_putchar (a[irow][jcol]);
if (jcol == 7)
{
_putchar('\n');
}
}
}
}
