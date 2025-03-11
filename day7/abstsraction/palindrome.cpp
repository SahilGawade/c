#include<iostream>
using namespace std;

int main(){
    int n,num,digit,rev=0;
    cout<<"enter the num :";
    cin>>num;
    n=num;
    do
    {
    digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;

    

}while(num!=0);
cout<<"The reverse is :"<<rev<<endl;
if(n==rev and n>0)
cout<<"This is pelindrome";
else
cout<<"This is not palindrome";
return 0;
}
