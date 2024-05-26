#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    int boolean = 0;
    for(int i = 2; i<n-1; i++){
        if(n%2==0){
            boolean = 1;
            break;
        }
    }
    if(boolean==0){
        cout<<n<<" is a PrimeNumber"<<endl;
    }
    else{
        cout<<n<<" is not a primeNumber"<<endl;
    }
    return 0;
}