#include<iostream>
#include<string>
using namespace std;

class Emp{
    private:
        int eid;
        string ename;
        string role;
        string dept;
        float years;
        double sal;

           public:

                  static int cnt;


                    static void cntemp(){
                             cnt++;
        }
               Emp(int id,string name,string role,string dept,float years,double sal){
                cntemp();
                this->eid=id;
                this->ename=name;
                this->role=role;
                this->dept=dept;
                this->years=years;++
                this->sal=sal;
        }
         void disp(){
            cout<<"id:"<<this->eid<<"\n";
            cout<<"name:"<<this->ename<<"\n";
            cout<<"role:"<<this->role<<"\n";
            cout<<"dept:"<<this->dept<<"\n";
            cout<<"years:"<<this->years<<"\n";  
            cout<<"sal:"<<this->sal<<"\n"; 
        }
         static void showempcnt(){
            cout<<"number of emp:"<<cnt<<"\n";
        }
};

int Emp::cnt=0;


int main(){
    Emp e1(1,"abc","software dev","technology",0.6,45000.00);
    e1.disp();

    Emp e2(2,"def","hr","humanresource",0.6,35000.00);
    e2.disp();

    Emp e3(2,"def","hr","humanresource",0.6,35000.00);
    e3.disp();
 Emp::showempcnt(); //:: scope resolution operator tells the compiler that showempcnt() is defined in Emp class.
    return 0;
}
