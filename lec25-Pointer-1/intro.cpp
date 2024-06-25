#include<iostream>
using namespace std;
main(){
    int num = 5;
    cout<<num<<endl;

    //Address Of Operator -> &
    cout<<"address of num -> "<<&num<<endl;
    int *ptr = &num;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}