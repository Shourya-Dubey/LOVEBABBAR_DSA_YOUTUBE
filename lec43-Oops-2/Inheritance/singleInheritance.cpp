#include<iostream>
using namespace std;
class Animal {
    public: 
    int weight;
    int age;
    int height;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human:public Animal {
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
main() {
    Human h1;
    cout<<h1.weight<<endl;
return 0;
}