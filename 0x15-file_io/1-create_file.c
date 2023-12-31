#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * _str_len - function that returns the length of a string.
 * @strg: the string.
 * Return: 1 or -1.
 */
int _str_len(char *strg)
{
if (*strg == '\0')
return (0);
else
return (1 + _str_len(strg + 1));
}

/**
 * create_file - a function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: a null terminated string to write to the file.
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written_content;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
written_content = write(fd, text_content, _str_len(text_content));
if (written_content == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
