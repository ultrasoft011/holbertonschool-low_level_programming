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
int mul, number1, number2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
number1 = atoi(argv[1]);
number2 = atoi(argv[2]);
mul = number1 * number2;
printf("%d\n", mul);
return (0);
}
}
