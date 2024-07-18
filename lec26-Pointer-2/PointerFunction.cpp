#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){
    // p = p + 1;
    // cout<<p<<endl;
    *p = *p + 1;
}
int sum(int arr[], int n){
    cout<<"size of arr -> "<<sizeof(arr)<<endl;
    
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
main()
{
    int value = 5;
    int *p = &value;

    print(p);

    cout<<p<<endl;
    update(p); //pass by value
    cout<<p<<endl;
    cout<<*p<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<"Sum of arr -> "<<sum(arr, 5);

    return 0;
}