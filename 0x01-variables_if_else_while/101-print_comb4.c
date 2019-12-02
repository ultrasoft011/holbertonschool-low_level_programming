#include <stdio.h>
/**
*main - prints all possible different combinations of three digits.
*Return: 0
*/
int main(void)
{
int first = 0;
int second = 0;
int third = 0;
for (first = 48; first <= 57; first++)
{
	for (second = 48; second <= 57; second++)
	{
		for (third = 48; third <= 57; third++)
		{
			if (first < second && second < third)
			{
				putchar (first);
				putchar (second);
				putchar (third);
				if (first != 55 || second != 56)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
