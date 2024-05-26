#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i = 1; i<=a; i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    int nume = factorial(n);
    int deno = factorial(r) * factorial(n-r);
    return nume/deno;
}

main(){
    int n, d;
    cin>>n>>d;
    cout<<"NCR=> "<<ncr(n,d)<<endl;
}