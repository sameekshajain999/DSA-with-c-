#include<iostream>
using namespace std;
void newval(int a){
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
}
int main(){

    int a=5;
    cout<<a<<endl;
    newval(a);
    cout<<"final o/p is:"<<a<<endl;
    return 0;
}