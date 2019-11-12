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
int ab, cd, ef;
char *buf;
	buf = malloc(sizeof(letters));
	if (buf == '\0')
	{
		return ('\0');
	}

	ab = open(filename, O_RDONLY);
	if (ab == '\0')
	{
		return (0);
	}

	cd = read(ab, buf, letters);
	if (cd == '\0')
	{
		return (0);
	}
	ef = write(ab, filename, letters);

close(ab);
return (ef);
}
