
#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
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
    int arr[] = {27, 24, 30, 29, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "ENTER KEY: ";
    cin >> key;

    cout<<search(arr,size,key);
}