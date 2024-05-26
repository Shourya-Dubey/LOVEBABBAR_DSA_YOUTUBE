#include<iostream>
using namespace std;
main(){

    //postIncrement
    int i = 4;
    int a = i++;
    cout<<a<<endl;
    cout<<i<<endl;

    int j = 3; 
    int b = 2;
    int sum = b + (j++);
    cout<<sum<<endl;


    //preIncrement
    int k = 11;
    int c = ++k;
    cout<<c<<endl;
    cout<<k<<endl;

    int l = 7;
    cout<<(++l)<<endl;
    cout<<(l++)<<endl;
    cout<<(l--)<<endl;
    cout<<(--l)<<endl;


    return 0;
}