#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of file to be read
 *@letters: number of letters to print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t print;
	int fd, rd;
	char buf[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	print = write(1, buf, rd);
	if (print == -1)
		return (0);
	return (print);
}
