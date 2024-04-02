#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 */
int main(int argc, char** argv)
{
	(void) argv;
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file \n");
		exit(EXIT_FAILURE);
	}
	read_t(*argv);
	return (0);
}
