#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
*read_textfile - read a text
*@filename: filename
*@letters: letters
*Return: ssize
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ab;
char *buf;
ssize_t _read, _write;

	if (filename == NULL)
	{
		return (0);
	}
ab = open(filename, O_RDONLY);
	if (ab == -1)
	{
		return (0);
	}
buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(ab);
		return (0);
	}
_read = read(ab, buf, letters);
	if (_read == -1)
	{
		return (0);
	}
close(ab);
_write = write(STDOUT_FILENO, buf, _read);

return (_write);
}
