all: cpu

clean:
	rm -f bin/cpu bin/mem bin/threads bin/io

bin:
	mkdir bin

cpu: cpu.go bin
	go build --o bin
