/*************************************************************************
	> File Name: tty.c
	> Author: 
	> Mail: 
	> Created Time: Tue 26 Apr 2016 05:53:59 PM CST
 ************************************************************************/

#include "apue.h"

int main()
{
    printf("session id: %d\n", tcgetsid(STDIN_FILENO));
    printf("process id: %d\n", getpid());
    sleep(10);
    printf("foreground group id: %d\n", tcgetpgrp(STDIN_FILENO));
    return 0;
}
