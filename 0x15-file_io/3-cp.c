#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int fptr1, fptr2;
    char buffer[1024];
    ssize_t numbytes_read, numbytes_written;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
        exit (97);
    }
    fptr1 = open(argv[1], O_RDONLY);
    if (fptr1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit (98);
    }
    fptr2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fptr2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit (99);
    }
    while ((numbytes_read = read(fptr1, buffer, 1024))> 0)
    {
        numbytes_written = write(fptr2, buffer, numbytes_read);
        if (numbytes_written == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit (99);
        }
    }
    if (close(fptr1) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr1);
        exit (100);
    }
    if (close(fptr2) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr2);
        exit (100);
    }
    return (0);
}