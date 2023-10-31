#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the stdout.
 * @filename: name of the file.
 * @letters: number of characters to read and print.
 * Return: number of characters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numbytes_read, numbytes_written;
	FILE *fptr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}
	numbytes_read = fread(buffer, 1, letters, fptr);
	fclose(fptr);
	if (numbytes_read == 0)
	{
		free(buffer);
		return (0);
	}
	numbytes_written = write(STDOUT_FILENO, buffer, numbytes_read);
	free(buffer);
	if (numbytes_written != numbytes_read)
	{
		return (0);
	}
	return (numbytes_written);
}
