#include <iostream>
using namespace std;
class Animal
{
public:
    int weight;
    int age;
    int height;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
    public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Human2 : public Human, public Animal
{
    
};

main()
{
    Human2 h2;
    h2.speak();
    h2.bark();
    return 0;
}