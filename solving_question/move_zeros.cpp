#include<iostream>
using namespace std;
void zeros(int nums[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
}
int main(){
    int nums[]={0,1,0,3,12};
    int n=5;
    zeros(nums,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }


}