#include<iostream>
using namespace std;
class Base
{
    public: 
    int age;
    char name;
};

class subClass : public Base
{
    
};

class subClass2 : public Base
{

};

main() {
    subClass s1;
    cout<<s1.age<<endl;
    
    subClass2 s2;
    cout<<s2.age<<endl;
return 0;
}