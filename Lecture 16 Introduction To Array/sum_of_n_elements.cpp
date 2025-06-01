
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "ENTER SIZE OF ARRAY: ";
    cin >> size;
    int sum = 0;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "ENTER ELEMENT " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "SUM OF ELEMENTS IS: " << sum;
}