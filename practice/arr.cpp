#include<iostream>
#include<climits>
using namespace std;
void min (int arr[],int n){
    int min=INT_MAX;
    int max=INT_MIN;
    int ans=0;
    while(n!=0){
        if(ans<min){
            min=ans;
        }else{
            max=ans;
        }
    }
}
int main(){
    int arr[]={4,2,8,10};
    int n=4;
    min(arr,n);
    return 0;
}


