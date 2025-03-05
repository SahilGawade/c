#include<iostream>
#include<string>
using namespace std;

class A{

    public :
    int a,b;
    void value(){
        cout<<"enter the value=";
        cin>>a>>b;

    }
};

class B : public A{
    public :
    int c;
    void add(){
        c = a+b;
        cout<<c;

    }
};

class C : public B{
    public :
    int d;
    void sub(){
        d=c-20;
        cout<<d;
    }
};
int main(){

    C e;
    e.value();
    e.add();
    e.sub();
    return 0;
}
