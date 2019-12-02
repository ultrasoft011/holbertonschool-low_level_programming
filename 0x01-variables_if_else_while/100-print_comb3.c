
#include <stdio.h>
/**
*main - prints all possible different combinations of two digits.
*Return: 0
*/
int main(void)
{
int first = 0;
int second = 0;

for (first = 48; first <= 57; first++)
{
	for (second = 48; second <= 57; second++)
	{
		if (first < second)
		{
			putchar (first);
			putchar (second);
			if (first != 56 || second != 57)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
