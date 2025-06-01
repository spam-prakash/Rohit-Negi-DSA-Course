
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {9, 99, 999, 44, 3333, 1, -4, -9};
    int min = INT_MAX;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
}