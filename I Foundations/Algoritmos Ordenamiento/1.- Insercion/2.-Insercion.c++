#include <iostream>
using namespace std;

void print(int array[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
};
int main()
{
    int array[] = {23, 234, 52, 12, 52, 2, 4};
    int lenght = sizeof(array) / sizeof(array[0]);
    print(array, lenght);
    int j, aux;
    for (int i = 0; i < lenght; i++)
    {
        j = i - 1;
        aux = array[i];
        while (j >= 0 && aux <= array[j])
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = aux;
    }
    print(array, lenght);

    return 0;
}
