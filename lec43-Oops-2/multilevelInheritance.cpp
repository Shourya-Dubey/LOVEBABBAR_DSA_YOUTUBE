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

class Human : public Animal
{
    public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Avanger : public Human
{

};

main()
{
    Avanger h2;
    h2.speak();
    h2.bark();
    return 0;
}