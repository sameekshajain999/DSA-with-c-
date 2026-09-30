#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int start=0;
    int end=n-1;
  int mid=start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
        return mid;
    }else if( key>arr[mid]){
        start=mid+1;

    }else{
        end=mid-1;
    }
    mid =start+(end-start)/2;

  }
    return -1;

}
int main(){
    int arr[]={4,8,16,22,34};
    int n=5;
    int key=22;
    cout<<binary(arr,n,key)<<endl;
    return 0;
}