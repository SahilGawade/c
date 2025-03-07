#include<iostream>
#include<string>
using namespace std;

class A {
public:
    int a, b;
    float x, y;
    
    void intvalue() {
        cout << "Enter two numbers: ";

        cin >> a>> b;
    }
     void Floatvalue(){
        cout<<"enter two integers : ";
        cin >>x>>y;
     }
};

class B : public A {
public:
    int c;

    void Addint() {
        c = a + b;
        cout << "Sum of integers: " << c << endl;
    }
};

class C : public A {
public:
    float z;

    void Floatadd() {
        z = x + y;
        cout << "Sum of floats: " << z << endl;
    }
};

int main() {
    B e;  
    e.intvalue(); 
    e.Addint();    
    C e1;          
    e1.Floatvalue();  
    e1.Floatadd();  

    return 0;
}
