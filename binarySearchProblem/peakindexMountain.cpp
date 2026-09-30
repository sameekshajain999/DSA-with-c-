#include<iostream>
using namespace std;
int mountain(int arr[],int n){
    int s=0;
    int e=n-1;
    
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;

}
int main(){
    int arr[]={3,4,5,88,1};
    int n=4;
  cout<<  mountain(arr,n)<<endl;
    return 0;
}