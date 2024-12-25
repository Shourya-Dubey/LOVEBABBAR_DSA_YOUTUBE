#include<iostream>
using namespace std;
class A
{
    static int x;
    public:
    int a;
    A(int b)
    {   

        this->a = b;
        cout<<"Value of a : "<<a<<endl;
        cout<<"Value of x : "<<x<<endl;
        x++;
    }
    static void display(){
        cout<<"Calling from display"<<endl;
        cout<<"Value of x inside display "<<x<<endl;
    }
};
int A :: x;

main() {
    A aa(5);
    A::display();
return 0;
}