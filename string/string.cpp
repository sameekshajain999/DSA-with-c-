#include<iostream>
using namespace std;
int main(){
    //declear
    string name;
    name.push_back('s');
    name.push_back('i');
    name.push_back('m');
    name.push_back('o');
    cout<<name<<endl;
    //initilization
    string surname="jain";//string double quotes ke ander rahti hai
    cout<<"before updation::"<<surname<<endl;
    //updation
    surname="sahu";
    cout<<"after updation::"<<surname<<endl;
}