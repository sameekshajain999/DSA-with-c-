#include<iostream>
using namespace std;
int sum(int a,int b){
    int totalsum=a+b;
    return totalsum;
}
void printnothing(){
    cout<<"babbar"<<endl;
}
int multiplication(int x,int y,int z){
    int result=x*y*z;
    return result;
}
void iteration(){
    for(int i=0;i<11;i++){
        cout<<"sameeksha"<<endl;
    }
}
int main(){
    int ans=sum(5,10);
    int multi=multiplication(23,3,6);
    cout<<multi<<endl;
    cout<<ans<<endl;
    printnothing();
    iteration();
    return 0;
}