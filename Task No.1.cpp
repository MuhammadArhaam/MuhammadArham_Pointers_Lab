#include <iostream>
using namespace std;
int countOccurrences(int* arr, int size, int value) 
{
    int count = 0;
    int* end = arr + size;
    for (int* ptr = arr; ptr < end; ++ptr) 
    {
        if (*ptr == value) 
        {
            ++count;
        }
    }
    return count;
}
int main()
{
    int arr[8] = { 1, 3, 5, 3, 3, 8, 2, 10 };
    int value = 3;
    cout << "Occurrences of " << value << "= " << countOccurrences(arr, 8, value) << endl;
    return 0;
}
