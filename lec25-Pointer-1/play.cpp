#include<iostream>
using namespace std;
main(){
    int i = 5;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;

    int *q = &num;
    (*q)++;
    cout<<num<<endl;

    //copying a pointer
    int *ptr = p;
    cout << p << " - " << ptr << endl;
    cout<<*p<<" - " <<*ptr<<endl;

    //Important Concept
    int l = 3;
    int *t = &l;
    *t = *t + 1;
    cout<<*t<<endl;
    
    cout<<"Before t-> "<<t<<endl;
    t = t + 1;
    cout << "after t-> " << t << endl;
    return 0;
}