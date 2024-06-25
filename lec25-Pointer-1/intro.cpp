#include<iostream>
using namespace std;
main(){
    int num = 5;
    cout<<num<<endl;

    //Address Of Operator -> &
    cout<<"address of num -> "<<&num<<endl;

    //Pointer
    int *ptr = &num;
    cout<<ptr<<endl;

    //Deference Operator -> *
    cout<<"Value at p -> "<<*ptr<<endl;

    return 0;
}