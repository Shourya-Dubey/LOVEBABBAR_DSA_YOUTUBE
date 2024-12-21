#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;
    char name[7];
    static int totalTimeLeft;
    static int random(){
        cout<<"Static member Function ";
        return totalTimeLeft;
    }

    Hero(){
        cout<<"Constructor is Calling"<<endl;
    }

    Hero(int h, char l){
        this->health = h;
        this->level = l;
    }
    Hero(int health){
        this->health = health;
    }

    void setHealth(int h){
        this->health = h;
    }
    void setLevel(char l){
        this->level = l;
    }

    int getHealth(){
       return this->health;
    }
    char getLevel(){
       return this->level;
    }

    //Copy Constructor
    // Hero(Hero& temp){
    //     cout<<"Copy Costructor Called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    //     cout<<temp.getHealth()<<endl;
    //     cout<<temp.getLevel()<<endl;
    // }

    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }

};

// Static Data member
int Hero::totalTimeLeft = 5;

int main(){
    // Hero hero1;
    // hero1.setHealth(87);
    // hero1.setLevel('A');
    // cout<<"get Health with static : "<<hero1.getHealth()<<endl;
    // cout<<"get Level with static : "<<hero1.getLevel()<<endl;
    // cout<<hero1.level<<endl;

    // Hero *hero2 = new Hero();
    // hero2->setHealth(50);
    // hero2->setLevel('B');
    // cout<<"Dynamic "<<(*hero2).getHealth()<<endl;
    // cout<<"Dynamic "<<(*hero2).getLevel()<<endl;

    // //OR
    // cout<<"With this-> "<<hero2->getHealth()<<endl;
    // cout<<"With this-> "<<hero2->getLevel()<<endl;

    // Hero h1(10, 'C');
    // cout<<"Hero h1 : "<<h1.getHealth()<<" , "<<h1.getLevel()<<endl;


    // Hero h2(h1);


    //Access Static Data Member
    cout<<Hero::totalTimeLeft<<endl;
    cout<<Hero::random()<<endl;
    

    Hero ramesh;
    Hero *suresh = new Hero();

    delete suresh;

    return 0;
}