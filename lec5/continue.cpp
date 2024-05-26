#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        if(i==4){
            continue;
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}