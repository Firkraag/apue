#include "apue.h"
#include <errno.h>
#include <limits.h>


int main()
{
	long unsigned size;

	path_alloc(&size);
	printf("size = %lu\n", size);
	return 0;
}
