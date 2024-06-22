#include <iostream>
using namespace std;
bool isPresent(int arr[3][3], int target){
    int row = 3;
    int col = 3;
    int s = 0; 
    int e = row*col - 1;

    int mid = s + (e - s)/2;
    while(s<=e){
        int rowIndex = mid/col;
        int colIndex = mid%col;
        if(arr[rowIndex][colIndex] == target){
            return 1;
        }
        else if (arr[rowIndex][colIndex] < target)
        {
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        int mid = s + (e - s) / 2;
    }
    return 0;
}

main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    if(isPresent(arr, 3)){
        cout<<"Number is present"<<endl;
    }else{
        cout<<"Number is not Present"<<endl;
    }
}