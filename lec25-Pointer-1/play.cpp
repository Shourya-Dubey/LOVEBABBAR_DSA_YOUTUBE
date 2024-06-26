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

    return 0;
}