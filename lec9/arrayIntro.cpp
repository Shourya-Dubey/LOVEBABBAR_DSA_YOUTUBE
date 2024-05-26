#include<iostream>
using namespace std;
main(){
    
    //declare
    int number[15];

    //accessing an array
    cout<<"Value at index 14"<<number[14]<<endl;

    //Intialising an array
    int second[3] = {5,7,11};
    cout<<"Value at 2nd index "<<second[3]<<endl;


    int third[15] = {2,7};
    int n = 15;
    cout<<"Printing the array"<<endl;
    for(int i = 0; i<n; i++){
        cout << third[i]<<" ";
    }
    

    //initalising all location with 0
    int forth[10] = {0};
    int m = 10;
    cout<<"Printing the array"<<endl;
    for(int i = 0; i<m; i++){
        cout << forth[i] << " ";
    }


    //initalising all location with 1
    int fifth[10] = {1};
    int p = 10;
    cout<<"Printing the array"<<endl;
    for(int i = 0; i<p; i++){
        cout << fifth[i] << " ";
    }






    return 0;
}