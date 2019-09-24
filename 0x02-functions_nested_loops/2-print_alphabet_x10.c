#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

  int i = 0;

  while(i<10)

    {

      int alpabeth;

      for (alpabeth = 'a'; alpabeth <= 'z'; alpabeth++)

	{

	  _putchar(alpabeth);

	}

      _putchar("\n");

      i++;

    }

  return 0;

}
