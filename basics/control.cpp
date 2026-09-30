#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you are not eligible"<<endl;
    }else if(age==18){
        cout<<"now you can make your voter id"<<endl;
    }else{
        cout<<"must go and do vote"<<endl;
    }

}