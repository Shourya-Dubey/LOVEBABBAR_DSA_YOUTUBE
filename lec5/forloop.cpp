#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing count from 1 to n"<<endl;

    for(int i = 0; i<n; i++){
        cout<<i<<endl;
    }


    cout<<"Another way of forloop"<<endl;
    int i = 1;
    for(; ;){
        if(i<=n){
            cout << i << endl;
        }
        else{
            break;
        }
        i++;
    }

    return 0;
}