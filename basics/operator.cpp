#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=5;
    //arthematic operator;
    cout<<"addition:"<<(a+b)<<endl;
    cout<<"subtracrtion:"<<(a-b)<<endl;
    cout<<"multiplication:"<<(a*b)<<endl;
    cout<<"devide"<<(a/b)<<endl;
    cout<<"module:"<<(a%b)<<endl;
    //relational operator
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    //logical operator
    bool c1=true;
    bool c2=true;
    bool c3=false;
    if(c1 && c2 && c3){
        cout<<"all conditions are true"<<endl;

    }else if (c1 ||c2){
        cout<<"two true"<<endl;
    }
    else{
        cout<<"not all true:"<<endl;
    }
    //Bit wise operation
    cout<<"and bitwise:"<<(5&4)<<endl;
    cout<<"or bitwise:"<<(5|4)<<endl;
    cout<<"not :"<<(-2)<<endl;
    cout<<"<<:"<<(5<<1)<<endl;
    cout<<">>:"<<(100>>3)<<endl;
    cout<<"^::"<<(5^3)<<endl;
    
    
    
}