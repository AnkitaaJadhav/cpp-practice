#include<iostream>
using namespace std;

int main()
{
    int arr[3][3], sum = 0;
    cout << "Enter elements of 2D array (3x3):" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    
    cout << "Sum of all elements in the 2D array: " << sum << endl;
    return 0;
}