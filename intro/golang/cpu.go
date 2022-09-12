package main

import "fmt"
import "os"
import "time"

func main() {
	var done bool
	done = false
	for !done {
		time.Sleep(1 * time.Second)
		fmt.Println("Run", os.Args[0], " with ", os.Args[1])
	}
}
