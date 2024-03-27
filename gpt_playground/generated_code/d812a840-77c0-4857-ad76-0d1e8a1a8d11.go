package main

import (
	"fmt"
)

func main() {
	set1 := map[int]bool{1: true, 2: true, 3: true}
	set2 := map[int]bool{2: true, 3: true, 4: true}
	intersection := intersectSets(set1, set2)
	fmt.Println("Intersection:", intersection)
}

func intersectSets(set1, set2 map[int]bool) map[int]bool {
	intersection := make(map[int]bool)
	for elem := range set1 {
		if set2[elem] {
			intersection[elem] = true
		}
	}
	return intersection
}