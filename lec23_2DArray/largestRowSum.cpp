#include <iostream>
#include <climits>
using namespace std;
int largestRowSum(int arr[][4], int n, int m)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"maximum sum is -> "<<maxi<<endl;
    return rowIndex;
}
main()
{
    int arr[3][4];

    cout << "Enter the element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Max row sum is at index "<<largestRowSum(arr, 3, 4);

    return 0;
}