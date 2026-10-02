#include<iostream>
using namespace std;
// pivot find
int pivotelement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
// binary search
int binary(int arr[],int s,int e,int target){
     
    int mid=s+(e-s)/2;
    while(s<=e){
       if(arr[mid]==target){
        return mid;
       }else if(target>arr[mid]){
        s=mid+1;
       }else{
        e=mid-1;
       }
       mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,9,1,2,3};
    int n=5;
    int target=2;
   int pivot=pivotelement(arr,n);
   if(target>=arr[pivot] && target<=arr[n-1]){  
     cout<<binary(arr,pivot,n-1,target)<<endl;
   }
    else{
        cout<< binary(arr,0,pivot-1,target)<<endl;
    }
    return 0;

}
