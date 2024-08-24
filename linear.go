package main

import "fmt"

func linearSearch(arr []int, x int) int {
    for i, n := range arr {
        if n == x {
            return i
        }
    }
    return -1
}

func main() {
    arr := []int{2, 4, 0, 1, 9}
    x := 1
    result := linearSearch(arr, x)
    if result == -1 {
        fmt.Println("Élément non trouvé")
    } else {
        fmt.Printf("Élément trouvé à l'indice %d\n", result)
    }
}
