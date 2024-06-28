#include<iostream>
using namespace std;
main(){
    int arr[10] = {2,4,6};
    cout<<"Address of  First Memory block -> "<<arr<<endl;
    cout<<"Address of  First Memory block -> "<<&arr[0]<<endl;
    cout<<"value at arr index -> "<<*arr<<endl;
    cout<<"value at arr index -> "<<*arr + 1<<endl;
    cout<<"value at arr index -> "<<*(arr + 1)<<endl;
    cout << "value at arr index -> " << (*arr) + 1 << endl;
    return 0;
}