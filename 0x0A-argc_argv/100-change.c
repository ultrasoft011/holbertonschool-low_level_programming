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
int coins[] = {25, 10, 5, 2, 1};
int counter = 0, value, cents = 0;

if (argc == 2)
{
value = atoi(argv[1]);
if (value <= 0)
{
printf("0\n");
}
else
{
for(counter = 0; counter < 5; counter++)
{
while (value >= coins[counter])
{
value = value - coins[counter];
cents++;
}
}
printf("%d\n", cents);
}
}
else
{
printf("Error\n");
return(0);
}
return(0);
}
