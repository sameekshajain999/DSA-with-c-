#include<iostream>
using namespace std;
bool PowerOfTwo(int n){
    int ans=1;
    for(int i=0;i<=30;i++){
       // int ans=pow(2,i);
        if(ans==n){
            return true;
        }
          ans=ans*2;
    }
   
    return false;
}
int main(){
    int n=16;
    
    cout<<PowerOfTwo(n)<<endl;
    return 0;
}
