#include<iostream>
#include<string>
using namespace std;
class teacher{
public:
// constructor
//constructor automatically call hoga
// this is the default or non parameterized constructor
teacher(){
    cout<<"this is empty comstructor"<<endl;
    dept="it";
}
// parameterized constructor
teacher(string n,string s, string d ){
    name=n;
    dept=d;
    subject=s;
}
// data member
 string name;
 string dept;
 string subject;
 // member function
 void changedept(string newdept){
    dept=newdept;

 }
 void getinfo(){
    cout<<"name is:"<<name<<endl;
    cout<<"subject is:"<<subject<<endl;
 }

};
int main(){
    
    teacher t1("sameeksha","math","it department");
    t1.getinfo();
 
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;

    return 0;

}