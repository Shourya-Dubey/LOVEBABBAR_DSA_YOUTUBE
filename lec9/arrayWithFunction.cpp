#include<iostream>
using namespace std;

void printingArray(int arr[], int size){
    //Printing array
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    //Printing Done
}

main(){
    
    int forth[10] = {0};
    printingArray(forth, 10);

    int fifth[3] = {2,3,7};
    printingArray(fifth, 3);

    //size of array
    int fifthSize = sizeof(fifth) / sizeof(int);
    cout<<"Size of fifthSize array is "<<fifthSize<<endl;

    return 0;
}