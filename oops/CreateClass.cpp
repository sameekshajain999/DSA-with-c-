#include<iostream>
#include<string>
using namespace std;
class teacher{
 private:
    double salary;
public:
    // data member ya properties
    string name;
    string dept;
    string subject;
    
    //member function
    void changedept(string newdept){
        dept=newdept;
    }
    // privatee acccess specifier ko access karne ke liye setter and getter ka use kiya jata hai
    //setter
    void setsalary(double s){
        salary=s;

    }
    //getter
    double getsalary(){
        return salary;
    }

};

int main(){

    teacher t1;
    
    // assign the values
    t1.name="sameeksha";
t1.dept="information technology";
t1.subject="dsa";
t1.setsalary(150000);
    // for the access we use the . dot  operator
    cout<<" access the name from public specifier:"<<t1.name<<endl;
    cout<<"access the sallry from the private:"<<t1.getsalary()<<endl;
     
    return 0;

}