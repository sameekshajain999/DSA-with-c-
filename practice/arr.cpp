#include<iostream>
using namespace std;
bool linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
         return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,44,5,6,78,90};
    int n=7;
    int key=8;
   bool ans= linear(arr,n,key);
   cout<<ans<<endl;
    return 0;
}