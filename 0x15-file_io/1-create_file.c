#include "main.h"
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * create_file - create a file
 * @filename: file to create.
 * @text_content: string to write in file.
 * Return: 1 (success), -1 (fail).
 */
int create_file(const char *filename, char *text_content)
{
	int fptr;
	int text_len, numbytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fptr = open(filename, O_CREAT);
		close(fptr);
		return (1);
	}
	fptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	text_len = strlen(text_content);
	numbytes_written = write(fptr, text_content, text_len);
	close(fptr);
	if (numbytes_written != text_len)
	{
		return (-1);
	}
	return (1);
}
