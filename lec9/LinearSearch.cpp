#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

main(){
    int arr[6] = {1,2,7,9,11};

    cout<<"Enter the Element"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 6, key);
    if(found){
        cout<<"Key is found"<<endl;
    }else{
        cout<<"Key is not found"<<endl;
    }

    return 0;
}