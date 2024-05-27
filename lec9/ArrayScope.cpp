#include<iostream>
using namespace std;

void demo(int arr[], int n){
    cout<<"Inside Function"<<endl;

    arr[0] = 100;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going Back to main function"<<endl;
}

main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }cout<<endl;

    demo(arr, n);

    cout<<"Inside Main function"<<endl;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}