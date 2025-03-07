#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a,b;
};
class B: public A
{
    public :
    void value()
    {
        cout<<"enter 2 nos=";
        cin>>a>>b;
    }

};

class C :public B
{
    public:
    int c;
    void Add(){
        c=a+b;
        cout<<c;

    }
};
class D: public B
{
    public:
    int d;
    void Sub(){
        d=a-b;
        cout<<d;
    }
};

int main(){
    C e;
    e.value();
    e.Add();

    D e1;
    e1.value();
    e1.Sub();

    return 0;
}

