
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};       // length is 5 and store the value given in the curly brace
    int arr[] = {5, 6, 7, 8, 4, 32, 3}; // Automatically determine the length
    int arr[5] = {7, 5};                // Length is 5 and store the first two elements correctly but the other 3 positions will be filled by the garbage value.
    int arr[5] = {0};                   // Length is 5 and stores 0 at all the positions.
    int arr[5];                         // Just declear the variable and its length;

    // Take input from user and add it in the array
    for (int i = 0; i < 5; i++)
    {
        cout << "ENTER ELEMENT: ";
        cin >> arr[i];
    }

    // Print elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}