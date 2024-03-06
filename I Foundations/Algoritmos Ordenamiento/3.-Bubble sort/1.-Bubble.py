
def bubbleSort(array):
    ordenado = False
    lenght = len(array) 

    while not ordenado:
        ordenado = True
        lenght = lenght - 1
        x = 0
        while x < lenght:
            if array[x] > array[x+1]:
                temp = array[x]
                array[x] = array[x+1]
                array[x+1] = temp
                ordenado = False
            x += 1        
    return array

def bubbleSortFor(array):
    for i in range(len(array)):
        for j in range(len(array)-i-1):
            if array[j] > array[j+1]:
                temp = array[j]
                array[j] = array[j+1]
                array[j+1]=temp
    
    return array

array = [423,213,4,32,5,3,2]
array2 = array.copy()
print("orig: ",array)
print("copy: ",array2)
print("_________________________________")
array = bubbleSort(array=array)
array2 = bubbleSortFor(array=array2)

print("orig: ",array)
print("copy: ",array2)

        






