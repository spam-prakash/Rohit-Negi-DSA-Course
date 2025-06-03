
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 6, 4, 3, 8, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int second = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < largest && arr[i] > second)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "No second largest element" << endl;
    }
    else
    {
        cout << "Second largest: " << second << endl;
    }
}