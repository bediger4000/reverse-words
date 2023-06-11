package main

import (
	"fmt"
	"os"
	"strings"
)

/*
 * Given a string of words delimited by spaces,
 * reverse the words in string.
 * For example, given "hello world here", return "here world hello"
 */

func main() {
	// put together words from command line
	spaceSeparated := strings.Join(os.Args[1:], " ")
	fmt.Printf("Original string: %q\n", spaceSeparated)
	fmt.Printf("Reversed string: %q\n", reverse(spaceSeparated))
}

func reverse(original string) string {
	split := strings.Split(original, " ")

	for i, j := 0, len(split)-1; i < j; i, j = i+1, j-1 {
		split[i], split[j] = split[j], split[i]
	}

	return strings.Join(split, " ")
}
