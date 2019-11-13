#include "holberton.h"
/**
*create_file - create a file
*@filename: filename
*@text_content: text content
*Return: create file
*/
int create_file(const char *filename, char *text_content)
{
int ab, cd, count = 0;
	if (filename == NULL)
	{
		return (-1);

	}
ab = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ab == -1)
	{
		return (-1);
	}
	while (text_content[count])
	{
		count++;
	}
cd = write(ab, text_content, count);

	if (cd == -1)
	{
		return (-1);
	}
return (-1);
}
