
#include <iostream>
using namespace std;

int find_position(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, position=size;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            position = mid;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            position=mid;
            
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            
        }
    }
    return position;
}

int main()
{
    int arr[] = {1, 4, 6, 8, 10, 14, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout<<"ENTER TARGET:";
    cin>>key;

    cout<<find_position(arr,size,key);
}