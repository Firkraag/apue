#include "apue.h"
#include <fcntl.h>
#define BUFFSIZE 4096

int main(int argc, char *argv[])
{
	char buf[BUFFSIZE];
	int fd = open(argv[1], O_RDONLY);
	int n;
	while ((n = read(fd, buf, BUFFSIZE)) > 0)
			if (write(STDOUT_FILENO, buf, n) != n)
				exit(255);

	return 0;
}
