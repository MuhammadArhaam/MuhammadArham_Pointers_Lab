#include <iostream>
using namespace std;
int findMiddleElement(int* arr, int size) 
{
    int* midPtr = arr + (size / 2);
    if (size % 2 == 0)
    {
        return *(midPtr - 1);
    }
    else 
    {
        return *midPtr;
    }
}
int main() 
{
    int arr[8] = { 1, 3, 5, 3, 3, 8, 2, 10 };
    cout << "Middle element= " << findMiddleElement(arr, 8) << endl;
    return 0;
}
