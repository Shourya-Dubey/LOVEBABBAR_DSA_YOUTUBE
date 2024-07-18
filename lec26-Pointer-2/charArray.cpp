#include<iostream>
using namespace std;
main(){
    char ch[5] = {"abcd"};
    cout<<ch<<endl;
    char *c = &ch[0];
    cout<<c<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl;
    int *ptr = &arr[0];
    cout<<ptr<<endl;

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;
}