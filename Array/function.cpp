#include<iostream>
using namespace std;
void sumofarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<" ";

}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    sumofarray(arr,size);
    return 0;
}