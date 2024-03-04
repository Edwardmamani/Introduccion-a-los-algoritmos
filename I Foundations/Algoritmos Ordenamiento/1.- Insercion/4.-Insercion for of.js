let array = [23, 234, 52, 12, 52, 2, 4]

let i = 0
console.log(array)
for (let elemento of array) {
    j = i - 1
    while (j >= 0 && elemento <= array[j]) {
        array[j + 1] = array[j]
        j -= 1
    }
    array[j + 1] = elemento
    i += 1
}
console.log(array)
