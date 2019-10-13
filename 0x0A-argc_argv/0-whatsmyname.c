#include <stdio.h>
/**
*main - The main function
*@argc: argc
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[]) /* command line Arguments */
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);          /* Printing the string using the argv[i] */
}
return (0);
}
