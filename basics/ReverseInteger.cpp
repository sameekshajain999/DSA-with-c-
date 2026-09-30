#include<iostream>
#include<climits>
using namespace std;
int reverse(int x){
    int ans=0;
    while(x!=0){
        int digit=x%10;
        if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
            return 0;
        }
        else{   
        ans=(ans*10)+digit;
        x=x/10;
        }
        
    }
    return ans;
    
}
int main(){
    int x=123;
    cout<<"the final reverse string is::"<<reverse(x)<<endl;
    return 0;
}