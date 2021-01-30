#!/usr/bin/env ipython

print '#include "apue.h"'
print '#include <errno.h>'
print '#include <limits.h>'

print 'static void	pr_sysconf(char *, int);'
print 'static void	pr_pathconf(char *, char *, int);'
print 
print 'int'
print 'main(int argc, char *argv[])'
print '{'
print '	if (argc != 2)'
print '		err_quit("usage: a.out <dirname>");'

source = open('sysconf.sym', 'r')
while True:
	line = source.readline()
	if len(line) == 0:
		break;
	split = line.split()
	print '#ifdef {0}'.format(split[0])
	print '	print("{0} defined to be %ld\\n", (long) {1} + 0);'.format(split[0], split[0]);
	print '#else'
	print '	print("no symbol for {0}\\n");'.format(split[0])
	print '#endif'
	print '#ifdef {0}'.format(split[1])
	print '	pr_sysconf("{0} =", {1});'.format(split[0], split[1]);
	print '#else'
	print '	print("no symbol for {0}\\n");'.format(split[1])
	print '#endif'

