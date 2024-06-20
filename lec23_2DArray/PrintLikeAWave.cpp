#include<iostream>
using namespace std;
main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    //Print 2D Array
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }

    for(int j = 0; j<3; j++){
        if(j & 1){
            for(int i = 3-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i = 0; i<3; i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}