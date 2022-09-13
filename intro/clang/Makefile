all: cpu mem threads io

clean:
	rm -f bin/cpu bin/mem bin/threads bin/io

bin:
	mkdir bin

cpu: cpu.c common.h bin
	gcc -o bin/cpu cpu.c -Wall

mem: mem.c common.h
	gcc -o bin/mem mem.c -Wall

threads: threads.c common.h common_threads.h
	gcc -o bin/threads threads.c -Wall -pthread

io: io.c common.h
	gcc -o bin/io io.c -Wall
