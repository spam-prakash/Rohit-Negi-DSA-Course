
#include <iostream>
using namespace std;

int sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped=0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=1;
            }
        }
        if(!swapped)
            break;
    }
}

int main()
{
    int arr[] = {27, 24, 30, 29, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}