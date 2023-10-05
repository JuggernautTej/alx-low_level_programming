#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include "main.h"

/**
* _close - custom close function
* @fdes: file descriptor.
* Return: 0.
*/
int _close(ssize_t fdes)
{
int a;
a = close(fdes);
if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fdes);
exit(100);
}
else
return (0);
}
/**
* main - entry point to the function.
* @argc: argument count.
* @argv: argument vector.
* Return: 0.
*/
int main(int argc, char **argv)
{
ssize_t fd1, fd2, sz, s_write;
char buff[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
sz = read(fd1, buff, 1024);
if (sz == -1)
{
_close(fd1);
_close(fd2);
dprintf(2, "Error: Can't read from %s\n", argv[1]);
exit(98);
}
s_write = write(fd2, buff, sz);
if (s_write == -1 || s_write != sz)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
_close(fd1);
_close(fd2);
exit(99);
}
_close(fd1);
_close(fd2);
return (0);
}
