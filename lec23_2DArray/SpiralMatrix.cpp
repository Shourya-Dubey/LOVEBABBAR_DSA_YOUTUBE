#include<iostream>
using namespace std;
    void printSpiral(int arr[3][3]){
        int row = 3;
        int column = 3;
        int count = 0;
        int total = row * column;
        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = column - 1;

        while (count < total)
        {
            // Starting Row
            for (int i = startCol; count < total && i <= endCol; i++)
            {
                cout<<arr[startRow][i]<<" ";
                count++;
            }
            startRow++;

            // End column
            for (int i = startRow; count < total && i <= endRow; i++)
            {
                cout<<arr[i][endCol]<<" ";                count++;
            }
            endCol--;

            // End row
            for (int i = endCol; count < total && i >= startCol; i--)
            {
                cout<<arr[endRow][i]<<" ";                count++;
            }
            endRow--;

            // start col
            for (int i = endRow; count < total && i >= startRow; i--)
            {
                cout<<arr[i][startCol]<<" ";
                count++;
            }
            startCol++;
        }
    }
main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout<<"printing Normal"<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Printing Spiral"<<endl;
    printSpiral(arr);
}