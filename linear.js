function linearSearch(arr, x) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === x) {
            return i;
        }
    }
    return -1;
}

const arr = [2, 4, 0, 1, 9];
const x = 1;
const result = linearSearch(arr, x);
if (result === -1) {
    console.log("Élément non trouvé");
} else {
    console.log(`Élément trouvé à l'indice ${result}`);
}
