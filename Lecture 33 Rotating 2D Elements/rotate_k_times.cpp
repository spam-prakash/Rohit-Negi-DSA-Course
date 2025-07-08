#include<iostream>
#include<vector>
using namespace std;

void rotate_once(vector<vector<int>>& matrix, int n)
{
    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

void print_matrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    int n = matrix.size();
    int k;
    cout << "Enter k (number of 90-degree rotations): ";
    cin >> k;
    k = k % 4; // Rotating 4 times brings it back to original
    for (int i = 0; i < k; i++) {
        rotate_once(matrix, n);
    } 
    cout << "Matrix after rotating " << k << " times (90 degrees each):\n";
    print_matrix(matrix);
    return 0;
}