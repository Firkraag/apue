#!/usr/bin/env zsh

for i in 1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288
do
	cp ~/Downloads/star.wars.iv.a.new.hope.1977.original.theatrical.dvdrip.xvid.fragment.rar /tmp/test.$i
	echo BUFFSIZE $i
	sed -i "/#define/c #define BUFFSIZE $i" mycat.c
	make > /dev/null
	/usr/bin/time -p ./mycat < /tmp/test.$i > /dev/null
	rm /tmp/test.$i
done
