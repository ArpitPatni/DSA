#include <iostream>
using namespace std;

void printRowWiseSum(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3];

    cout << "Enter the elments in an array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    printRowWiseSum(arr, 3, 3);
}