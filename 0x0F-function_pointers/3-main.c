#include "3-calc.h"
/**
 * main - The calculator
 * @argc: argc the elements
 * @argv: the content
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/* Declaration of the variables */
	int a, b;
	char *operator;
	int result;
	/* Condition of the number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Get the values and the operator */
	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	/* Condition of the operator (+, -, *, / or %) */
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
	 && *argv[2] != '/' && *argv[2] != '%') || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* Condition if the user tries to divide (/ or %) by 0 */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* The result of the operation */
	result = (*get_op_func(operator))(a, b);
	printf("%d\n", result);
	return (0);
}
