#include "3-calc.h"
/**
 * main - The calculator
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
// Declaration of the variables
int a, b;
char operator;
int result;
// get the values and the operator
operator = argv[2];
a = atoi([1]);
b = atoi([3]);  
// Condition of the number of arguments
if (argc != 4)
{
        printf("Error\n");
        exit (98);
}
// Condition of the operator (+, -, *, / or %), 
if (argv[2] != "+" || argv[2] != "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
{
        printf("Error\n");
        exit (99);
}

// Condition if the user tries to divide (/ or %) by 0 
if (argv[2] == "/" || argv[2]== "%" ) && (a || b) == 0 
{
        printf("Error\n");
        exit (100);
}
// making the operation
result = get_op_func(char *s))(a, b)
    return (0);