#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[6] = {3,5,7,13,2,1};
    cout << "Pivot Element at index => " << getPivot(arr, 6);
}