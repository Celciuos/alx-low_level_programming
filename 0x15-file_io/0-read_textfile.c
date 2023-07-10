#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    char buffer[letters];
    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        close(fd);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    close(fd);

    if (bytes_written == -1 || bytes_written != bytes_read)
        return 0;

    return bytes_written;
}
