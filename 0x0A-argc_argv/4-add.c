#include <stdlib.h>
#include <stdio.h>
/**
*main - The main function
*@argc: argc
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[]) /* command line Arguments */
{
int i, j, sum = 0;
char *x;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
x = argv[i];
for (j = 0; x[j]; j++)
{
if (x[j] < 48 || x[j] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
