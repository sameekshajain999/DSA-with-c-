#include<iostream>
using namespace std;
void pairsum(int arr[],int n,int s){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" ,"<<arr[j]<<endl;
            }
        }
    }
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int s=6;
    pairsum(arr,n,s);
    return 0;

}