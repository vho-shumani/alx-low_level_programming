#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append text to file.
 * @filename: file to append to.
 * @text_content: test to append.
 * Return: 1 (success), -1 (fail).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fptr = fopen(filename, "a");
	if (fptr == NULL)
	{
		return (-1);
	}
	fputs(text_content, fptr);
	fclose(fptr);
	return (1);
}
