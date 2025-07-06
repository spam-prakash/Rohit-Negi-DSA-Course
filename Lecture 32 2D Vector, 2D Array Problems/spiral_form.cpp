#include <iostream>
#include <vector>
using namespace std;

int spiral(int arr[][6], int row, int col)
{
}

int main()
{
    int arr[6][6] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    vector<vector<int>> elements = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}};
    int top = 0, right = elements[0].size() - 1, bottom = elements.size() - 1, left = 0;

    // spiral(arr,row,col);

    while (left <= right && top <= bottom)
    {
        // Print top row
        for (int j = left; j <= right; j++)
        {
            cout << elements[top][j] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
        {
            cout << elements[i][right] << " ";
        }
        right--;

        // Print bottom row if still valid
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << elements[bottom][j] << " ";
            }
            bottom--;
        }

        // Print left column if still valid
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << elements[i][left] << " ";
            }
            left++;
        }
    }
}