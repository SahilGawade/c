#include<iostream>
using namespace std;

int main(){
    try
    {
        int age=15;
        if(age>=18)
        {
            cout<<"Access garanted-you are old enough";
        }
        else{
            throw(age);
        }
}
catch(int num){
    cout<<"Access denied-you must be at least 18 years old .in";
    cout<<"age is : "<<num;
}
return 0;
}
