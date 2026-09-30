#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={22,34,5,66,48};
    int size=5;
    reverse(arr,5);
    printarr(arr,5);
    return 0;
}