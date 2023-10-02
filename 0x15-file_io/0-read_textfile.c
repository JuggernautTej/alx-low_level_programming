#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints to the
 * POSIX standard output.
 * @filename: The name of the text file.
 * @letters: The number of letters to be read and printed out.
 * Return: the number of letters and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *c;
ssize_t fd, sz, s_write;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
c = (char *)malloc(sizeof(char) * letters);
if (c == NULL)
return (0);
sz = read(fd, c, letters);
s_write = write(STDOUT_FILENO, c, sz);
if (s_write == -1 || s_write != sz)
{
close(fd);
free(c);
return (0);
}
close(fd);
free(c);
return (s_write);
}
