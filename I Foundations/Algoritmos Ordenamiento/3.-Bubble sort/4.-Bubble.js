function bubbleSort(array) {
    let ordenado = false, length = array.length, j, temp;
    while (!ordenado) {
        ordenado = true;
        length -= 1;
        j = 0;
        while (j < length) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                ordenado = false;
            }
            j += 1;
        }
    }
    return array;
}

let array = [123, 41, 23, 4, 51235, 12, 33, 2, 234];
console.log(array)
array = bubbleSort(array)
console.log(array)
