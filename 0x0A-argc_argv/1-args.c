#include <stdio.h>
#include <stdlib.h>
/**
*main - The main function
*@argc: argc
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[])
{
int i = 0;
while (argv[i] != '\0')
{
i++;
break;
}
printf("%d\n", argc - 1);
return (0);
}
