#include <stdio.h>

int linearSearch(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int x = 1;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, size, x);
    if (result == -1) {
        printf("Élément non trouvé\n");
    } else {
        printf("Élément trouvé à l'indice %d\n", result);
    }
    return 0;
}

// Recherche linéaire 