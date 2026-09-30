#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    switch(age){  
    case 'A' :cout<<"not eligible"<<endl;
    break;
    case 'B': cout<<"make voter"<<endl;
    break;
    age>18 ; cout<<"now do it"<<endl;
    }
    
    return 0;
}