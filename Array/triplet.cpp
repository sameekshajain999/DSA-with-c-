#include<iostream>
using namespace std;
int triplet(int arr[],int n,int key){
    int ans=0;
    for(int i=0;i<n-2;i++){
        for(int j=(i+1);j<n-1;j++){
            for(int k=(j+1);k<n;k++){
                 ans=arr[i]+arr[j]+arr[k];
                if(ans==key){
                    cout<<ans<<endl;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    return 1;
                }

            }
        }
        
    }
    return 0;
}
int main(){
    int arr[]={22,34,56,78,49};
    int n=5;
    int key=105;
  cout<< triplet(arr,n,key);
   
    return 0;
}