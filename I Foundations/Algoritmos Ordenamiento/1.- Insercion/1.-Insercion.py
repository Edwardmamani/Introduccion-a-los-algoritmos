array = [23,234,52,12,52,2,4]
print(array)
for index, elemento in enumerate(array):
    i = index - 1
    while i >= 0 and array[i] >= elemento :
        # creamos el espacio de insercion
        array[i+1] = array[i] 
        i-=1
        
    array[i+1] = elemento

print(array)
    