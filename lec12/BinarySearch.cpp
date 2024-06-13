#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end - start/2);
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start/2);
    }
    return -1;
}

main(){
    int even [6] = {1,2,6,8,9,12};
    int odd [5] = {5,8,9,13,15};

    int evenIndex = binarySearch(even, 6, 9);
    cout<<"Index of 9 => "<<evenIndex<<endl; 
    
    int oddIndex = binarySearch(odd, 5, 13);
    cout << "Index of 13 => " << oddIndex << endl;
    return 0;
}