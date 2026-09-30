#include<iostream>
using namespace std;
int main(){
    int number=50;
    cout<<"print the number:"<<number<<endl;
    cout<<"print the address:"<<&number<<endl;
    int *p=&number;
    cout<<"print the pointer address:"<<p<<endl;//when i print the p it give the reference of the &number because its equal to defien we
    cout<<"print the adress  value ::"<<*p<<endl;//this value is only give the 50 because its reference by the number address
    cout<<"print the address or indexing number of the pointer p::"<<&p<<endl;
  (*p)++;//we can also add the value
    cout<<"new added value::"<<*p<<endl;
    return 0;
}