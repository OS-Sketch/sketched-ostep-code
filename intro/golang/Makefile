all: cpu-golang mem threads io

clean:
	rm -f bin/cpu bin/mem bin/threads bin/io

bin:
	mkdir bin

cpu: cpu.go
	go build --o bin
