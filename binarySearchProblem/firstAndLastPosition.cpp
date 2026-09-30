#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }else if(key<arr[mid]){
            e=mid-1;
        }else if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int last(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }else if(key<arr[mid]){
            e=mid-1;
        }else if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[]={0,1,1,3,3,3,3,3};
    int n=8;
    int key=3;
    cout<<"first occurance:"<<first(arr,n,key)<<endl;
    cout<<"last occurance:"<<last(arr,n,key)<<endl;
    return 0;
}