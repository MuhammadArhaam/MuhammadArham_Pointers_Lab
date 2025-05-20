#include <iostream>
using namespace std;
void copyArray(int* source, int* destination, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        *(destination + i) = *(source + i);
    }
}
int main()
{
    int arr[8] = { 1, 3, 5, 3, 3, 8, 2, 10 };
    int dest[8];
    copyArray(arr, dest, 8);
    cout << "Copied array= ";
    for (int i = 0; i < 8; ++i)
    {
        cout << endl;
        cout << dest[i] << " ";
    }
    return 0;
}
