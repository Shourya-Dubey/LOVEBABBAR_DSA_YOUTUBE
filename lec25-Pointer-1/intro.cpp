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

    // Deference Operator -> *
    cout << "Value at p -> " << *ptr << endl;


    double d = 4.2;
    double *p2 = &d;
    cout << "address of d -> " << p2 << endl;
    cout << "Value at p2 -> " << *p2 << endl;

    cout<<"Size of int -> "<<sizeof(num)<<endl;
    cout<<"Size of p2 -> "<<sizeof(p2)<<endl;

    return 0;
}