#include "holberton.h"
/**
*append_text_to_file - append a file
*@filename: filename
*@text_content: text content
*Return: append file
*/
int append_text_to_file(const char *filename, char *text_content)
{
int ab, cd, count = 0;
	if (filename == NULL)
	{
		return (-1);

	}
ab = open(filename, O_WRONLY | O_APPEND);
	if (ab == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}
cd = write(ab, text_content, count);

	if (cd == -1)
	{
		return (-1);
		close(ab);
	}
return (1);
}
