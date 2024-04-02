#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 */
void intializing_stream()
{
	flow = malloc(sizeof(stream_t));
	if (flow == NULL)
		mem_failed();
	 flow->stream = NULL;
	 flow->line = NULL;
}
/**
 */
void mem_failed(void)
{
	dprintf(2, "Error: malloc failed \n");
	free(flow);
	exit(EXIT_FAILURE);
}
/**
 */
void 
