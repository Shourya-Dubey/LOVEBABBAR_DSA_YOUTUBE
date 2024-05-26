#include<iostream>
using namespace std;

//Print Array
void printArray(char ch[], int size){
    for(int i=0; i<size; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    //Printing Done 
}

main(){
    char ch[5] = {'a', 'b', 'c', 'd','e'};
    printArray(ch, 5);
    return 0;
}