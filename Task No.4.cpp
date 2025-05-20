#include <iostream>
using namespace std;
void swapEvenIndices(int* arr, int size)
{
    int* swapped = new int[size];
    for (int i = 0; i < size; ++i)
    {
        swapped[i] = arr[i];
    }
    for (int i = 0; i < size - 2; i += 2)
    {
        int temp = swapped[i];
        swapped[i] = swapped[i + 2];
        swapped[i + 2] = temp;
    }
    cout << "Original array= ";
    for (int i = 0; i < size; ++i) 
    {
        cout << *(arr + i) << " ";
    }
    cout << "Swapped array=  ";
    for (int i = 0; i < size; ++i)
    {
        cout << *(swapped + i) << " ";
    }
}
int main() 
{
    int arr[8] = { 1, 3, 5, 3, 3, 8, 2, 10 };
    swapEvenIndices(arr, 8);
    return 0;
}
