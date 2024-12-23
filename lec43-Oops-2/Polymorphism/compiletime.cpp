#include<iostream>
using namespace std;

//Function Overloading
class A 
{
    public:
    void add()
    {
        cout << "Adding" << endl;
    }

    void add(int a)
    {
        cout << "Adding : "<< a << endl;
    }

    int add(int a, int b)
    {
        cout<<"Adding : "<< a << " " << b <<endl;
    }

};

//Operator Overloading
class B
{
    public:
    void operator() (){
        cout<<"operator overloading"<<endl;
    }
};

main() {
    A obj1;
    obj1.add(5, 5);

    B obj2;
    obj2();
return 0;
}