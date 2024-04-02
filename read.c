#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "monty.h"
/**
 */
int read_t(const char* filename)
{
	char buffer[100];
	FILE *read_file;
	int file_n = open(filename, O_RDONLY);
	if (file == -1)
	{
		dprintf(Error: Can't open file <file>);

	}
	read_file = malloc(sizeof(file_n));
	if (read_file == NULL)
	{
		dprintf(Error: malloc failed);
		free(readfile);
		exit(EXIT_FAILURE);
	}
	
