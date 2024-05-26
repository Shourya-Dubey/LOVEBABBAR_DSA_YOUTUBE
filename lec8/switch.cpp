#include<iostream>
using namespace std;
main(){
    int num = 1;
    cout<<endl;

    char ch = '1';

    switch(ch){
        case 1: cout<<"FIRST"<<endl;
                break;
        case '1': switch(num){
                case 1: cout<<"Value of num => 1"<<endl;
                        break;
                case 2: cout<<"Value of num =>2"<<endl;
                        break;
                }  
                 break;
        default: cout<<"This is default case"<<endl;
    }
    return 0;
}