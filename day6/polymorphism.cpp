#include<iostream>
#include<string>
using namespace std;

class Math{
    public:
    int add (int a , int b){
        return a+b;
    }
    double add(double a, double b){
  return a+b;
    }
    
};
  int main (){
    Math obj;
    cout<<"sum(int):"<<obj.add(10,5)<<endl;
    cout<<"sum(double):"<<obj.add(5.5,2.3)<<endl;
    return 0;

  }
