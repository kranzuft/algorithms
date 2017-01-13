package main

import "fmt"

func bubbleSort(items []int) {
	for {
		list_modified := false

		for i := len(items) - 1; i > 0; i-- {
			if items[i] < items[i-1] {
				items[i], items[i-1] = items[i-1], items[i]
				list_modified = true
			}
		}

		if !list_modified {
			break
		}
	}
}

func main() {
	items := []int{4, 4, 3, 4, 1}

	fmt.Println("Unsorted items: ", items)
	bubbleSort(items)
	fmt.Println("Sorted items: ", items)
}
