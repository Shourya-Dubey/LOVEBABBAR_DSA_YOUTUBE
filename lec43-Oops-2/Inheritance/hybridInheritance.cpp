#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    int b;
    
    public:
    void funcA()
    {
        cout<<"calling from Class A"<<endl;
    }
};

class B : public A
{
    public:
    void funcB()
    {
        cout<<"calling from Class B"<<endl;
    }
};

class D
{
    public:
    void funcD(){
        cout<<"Calling form class D"<<endl;
    }
};

class C : public A , public D
{
    public:
    void funcC()
    {
        cout<<"calling from class C"<<endl;
    }    
};


main() {

    C obj;
    obj.funcC();
    obj.funcA();
    obj.funcD();

return 0;
}