
#include <iostream>
using namespace std;

int first_position(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, first = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] < key)
            start = mid + 1;
    }
    return first;
}

int last_position(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, last = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] < key)
            start = mid + 1;
    }
    return last;
}

int main()
{
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    cout << first_position(arr, size, key) << endl;
    cout << last_position(arr, size, key);
}