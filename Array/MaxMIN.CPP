
    #include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[]={4,12,8,10};
    int n=4;
    
    cout<<"max val is :"<<getmax(arr,n)<<endl;
    cout<<"min value is:"<<getmin(arr,n)<<endl;
    return 0;
}
