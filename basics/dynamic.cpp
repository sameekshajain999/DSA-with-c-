#include<iostream>
using namespace std;
int main(){
    // dynamic memory
    int *p=new int ;
    cout<<*p<<endl;
    cout<<&p<<endl;
    //when you donot need
     delete p;

}