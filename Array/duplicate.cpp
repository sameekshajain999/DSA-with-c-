#include<iostream>
#include<vector>
using namespace std;
int cate(int arr[],int n){
    int ans=0;
    // all elemebnt in array
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    //number 1 to n-1
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
    
}
int main(){
    int arr[]={4,2,1,3,2};
    int n=5;
    int resu=cate(arr,n);
    cout<<resu<<endl;
    return 0;
}