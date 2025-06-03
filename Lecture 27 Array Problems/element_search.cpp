
#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    bool isFound = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 6, 54, 2, 3, 5};
    int key = 16;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, size, key);

    if (result >= 0)
    {
        cout << "Found at " << result;
    }
    else
    {
        cout << "NOT FOUND: " << result;
    }
}