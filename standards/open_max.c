#include "apue.h"
#include <errno.h>
#include <limits.h>

int main()
{
	printf("open max = %ld\n", open_max());
	return 0;
}
