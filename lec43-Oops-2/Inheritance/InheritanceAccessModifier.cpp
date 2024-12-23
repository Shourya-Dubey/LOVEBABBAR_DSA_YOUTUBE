#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }


};

class Dog:public Animal{
    public:
    string color;
    
    int getAge(){
       return this->age;
    }
};
main() {

    Dog obj;
    cout<<obj.age<<endl;
    cout<<obj.getAge()<<endl;

return 0;
}