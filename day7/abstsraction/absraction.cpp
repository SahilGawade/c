#include<iostream>
using namespace std;

class Abstarction
{

    private :
    int a, b;
    public :
    void set(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a= "<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main (){

    Abstarction a;
    a.set(10,20);
    a.display();
    return 0;

}
