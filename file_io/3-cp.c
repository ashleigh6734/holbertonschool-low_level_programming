#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *file_from, *file_to, *buffer[1024];
	int fd_array[2];
	int fd_from, fd_to;
	ssize_t bytes = 1024;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	
	open_files(file_from, file_to, fd_array);
	fd_from = fd_array[0];
	fd_to = fd_array[1];

	while (bytes == 1024)
	{
		bytes = read(fd_from, buffer, bytes);
		if (bytes == -1)
			print_error(98, file_from);
		bytes = write(fd_to, buffer, bytes);
		if (bytes == -1)
			print_error(99, file_to);
	}

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1 || close(fd_from) == -1)
		exit(100);
	return (0);
}

int *open_files(char *file_from, char *file_to, int *fd_array)
{
	mode_t old_umask = umask(0);
	fd_array[0] = open(file_from, O_RDONLY);
	if (fd_array[0] == -1)
		print_error(98, file_from);
	fd_array[1] = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	umask(old_umask);
	if (fd_array[1] == -1)
		print_error(99, file_to);
	return (fd_array);
}

void print_error(int exit_code, char *file_name)
{
	if (exit_code == 98)
	{
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
                        exit(98);
	}
	if (exit_code == 99)
	{
                        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_name);
			exit(99);
	}
}
