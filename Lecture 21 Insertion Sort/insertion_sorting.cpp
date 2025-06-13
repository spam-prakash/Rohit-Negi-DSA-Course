
#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    // for (int i = 1; i < size; i++)
    // {
    //     int key = arr[i];
    //     int j = i - 1;
    //     cout<<arr[j]<<endl;

    //     while (j >= 0 && arr[j] > key)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     // cout<<arr[j+1]<<" "<<arr[j]<<endl;
    //     arr[j + 1] = key;
    // }

    for(int i=1;i<size;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else   
                break;
        }
    }
}

int main()
{
    int arr[] = {7, 4, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}