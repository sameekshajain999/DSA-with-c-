#include<iostream>
#include<climits>
using namespace std;
void intersection(int arr1[],int n,int arr2[],int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<< arr1[i]<<endl;
                arr2[j]=INT_MIN;
                break;
            }
        }
        
    }
    cout<<endl;
}
int main(){
    int arr1[]={1,2,3};
    int n=3;
    int arr2[]={3,4};
    int m=2;
    intersection(arr1,n,arr2,m);
    return 0;
}
