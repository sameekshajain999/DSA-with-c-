#include<iostream>
using namespace std;
class student{
public:
int age;
string name;
int weight;
// default constructor
student(){
    cout<<"default ya no parameter::"<<endl;
    age=0;
    weight=48;
    name="simo";
}
//parameterized constructor
student(int myage,int myweight,string myname){
    cout<<"this is parameterized"<<endl;
    age=myage;
 name=myname;
    weight=myweight;
}
void play(){
    cout<<"i am playling"<<endl;
}
void sleep(){
    cout<<"i will do everything"<<endl;

}

};
int main(){
    student a;// static
    student * b=new student;// dynamic
    //static
    student x;// we nothing give thats why its called default constructor
    student y(54,66,"priya");//its called parameter constructor
    //dynamic
    student * s=new student(10,20,"akki");
    return 0;
}