#include<iostream>
using namespace std;

//Function Overriding && Method Overriding
class Animal
{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"Barking"<<endl;
    }
};

main() {
    Dog d;
    d.speak();
return 0;
}