// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void display()
//     {
//         cout<<"Calling from Class A"<<endl;
//     }
// };

// class B : public virtual A
// {};

// class C : public virtual A
// {};

// class D : public B, public C
// {};

// main()
// {   
//     D obj;
//     obj.display();
//     return 0;
// }

#include <iostream>

using namespace std;
class BaseClass1
{
public:
    BaseClass1()
    {
        cout << " BaseClass1 constructor called" << endl;
    }
};

class BaseClass2
{
public:
    BaseClass2()
    {
        cout << "BaseClass2 constructor called" << endl;
    }
};

class DerivedClass : public BaseClass2, public BaseClass1
{
public:
    DerivedClass()
    {
        cout << "DerivedClass constructor called" << endl;
    }
};

int main()
{
    DerivedClass derived_class;
    return 0;
}