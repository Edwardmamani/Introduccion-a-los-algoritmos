#include <iostream>

using namespace std;

void print(int array[], int length, char separador = ' ')
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i];
        if (i + 1 != length)
            cout << separador;
    }
    cout << endl;
}
void bubbleSort(int array[], int length)
{
    bool ordenado = false;
    int j, temp;

    while (!ordenado)
    {
        ordenado = true;
        length = length - 1;
        j = 0;
        while (j < length)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                ordenado = false;
            }
            j += 1;
        }
    }
}

int main()
{
    int array[] = {423, 213, 4, 32, 5, 3, 2};
    int length = sizeof(array) / sizeof(array[0]);

    print(array, length, '-');
    bubbleSort(array, length);
    print(array, length, ',');

    return 0;
}