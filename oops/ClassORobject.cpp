#include<iostream>
using namespace std;
class student{
    public:
    //properties
    int age;
    int weight;
    int height;
 string name;
    // behavior member function
    void running(){
        cout<<" i am running"<<endl;
    }
    void study(){
        cout<<name <<" is studying"<<endl;
    }

};
int main(){
    // know the size of empty class
    cout<<sizeof(student)<<endl;
    //stack way
    student s1;
    s1.age=48;
    s1.name="sameeksha";
    s1.weight=55;
    s1.height=51;
    s1.running();
    // dynamic way
    student * s=new student();
    (*s).age=56;
    (*s).name="priyampada";
    (*s).weight=45;
    (*s).height=66;
    (*s).running();
    return 0;

}