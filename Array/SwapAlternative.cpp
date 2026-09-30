#include<iostream>
using namespace std;
void swapall(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){   
        swap(arr[i],arr[i+1]);
        }
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int even[6]={24,23,45,67,89,98};
    int odd[5]={2,54,56,7,89};
    swapall(odd,5);
    print(odd,5);
    swapall(even,6);
    print(even,6);
    return 0;

}