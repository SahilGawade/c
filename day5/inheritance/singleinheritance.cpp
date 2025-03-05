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
int main()
{
    B b1;
    b1.value();
    b1.add();
    return 0;
}
