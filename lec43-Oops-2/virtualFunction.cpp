#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"Calling Base Class A"<<endl;
    }
    // virtual void show() = 0;

    static void display(){
        cout<<"display"<<endl;
    }
};

class B : public A
{
    public:
    void show()
    {
        cout<<"Calling Derived Class B"<<endl;
    }
};

int main(){
    //Also a concept of late binding runtime polymorphism
    
    A *bptr;
    B aa;
    bptr = &aa;
    bptr->show();
   return 0;
}