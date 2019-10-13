#include <stdio.h>
/**
*main - The main function
*@argc: argc
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[]) /* command line Arguments */
{
int counter;
for (counter = 0; counter < argc; counter++)
{
printf("%s\n", argv[counter]);
}
return (0);
}
