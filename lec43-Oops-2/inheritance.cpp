#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getWeight(){
        return this->weight;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is Sleeping"<<endl;
    }
};
main() {
Male shourya;
shourya.setWeight(80);
cout<<"Male Weight : "<<shourya.getWeight()<<endl;
shourya.sleep();
cout<<shourya.age<<endl;
cout<<shourya.weight<<endl;
cout<<shourya.height<<endl;
cout<<shourya.color<<endl;
return 0;
}