#include<iostream>
using namespace std;
main(){
    int a = 4;
    int b = 6;

    cout<<"a&b => "<<(a&b)<<endl;
    cout<<"a|b => "<<(a|b)<<endl;
    cout<<"~a => "<<~a<<endl;
    cout<<"a^b => "<<(a^b)<<endl;


    //Right Shift
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;

    //Left Shift
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;
    cout<<(21<<2)<<endl;

    return 0;
}