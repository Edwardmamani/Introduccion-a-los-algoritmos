let array = [23, 234, 52, 12, 52, 2, 4]
let j, elemento

console.log(array)
for (let i = 0; i < array.length; i++) {
    j = i - 1
    elemento = array[i]
    while (j >= 0 && elemento <= array[j]) {
        array[j + 1] = array[j]
        j -= 1
    }
    array[j + 1] = elemento
}
console.log(array)
