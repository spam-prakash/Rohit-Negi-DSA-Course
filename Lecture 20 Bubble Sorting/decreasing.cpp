
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = {7, 4, 8, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}