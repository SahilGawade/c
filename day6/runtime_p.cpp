/*#include<iostream>
using namespace std;

class Animal{

    public:
    void makesound(){
cout<<"animal make sound :"<<endl;

    }
};
class Dog:public Animal{
    public :
    void makesound(){
        cout<<"dog breaks:"<<endl;
    }
};
class Cat:public Animal{
    public :
    void makesound(){
        cout<<"cat meow"<<endl;
    }
};
int main(){
    Animal animal;
    Dog dog;
    Cat cat;

    animal.makesound();
    dog.makesound();
    cat.makesound();
    return 0;
}*/


#include<iostream>
using namespace std;

class Bike{
    public:
    void speed(){
        cout<<"speed is :"<<endl;

    }
};
class Splendor:public Bike{
    public:
    void speed(){
        cout<<"speed is 100 "<<endl;
    }
};
 class Pulsur:public Bike{
    public :
    void speed(){
        cout<<"speed is 180 "<<endl;
    }
 };
 int main(){
    Bike bike;
    Splendor splendor;
    Pulsur pulsur;

    bike.speed();
    splendor. speed();
    pulsur. speed();

    return 0;
 }
