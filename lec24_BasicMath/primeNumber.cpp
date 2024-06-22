#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" Is a Prime Number"<<endl;
    }else{
        cout<<n<<" is not a Prime Number"<<endl;
    }
}