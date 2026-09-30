#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &temp=a;
    cout<<temp<<endl;
    cout<<a<<endl;
    temp--;
    cout<<temp<<endl;
    a++;
    cout<<temp<<endl;
}