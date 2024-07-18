#include<iostream>
using namespace std;
main(){
    char ch[5] = {"abcd"};
    cout<<ch<<endl;
    char *c = &ch[0];
    cout<<c<<endl;
}