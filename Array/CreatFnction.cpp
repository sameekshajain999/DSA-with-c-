#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[]={2,33,56,78,98,55};
printarr(arr,6);
cout<<endl;
char ch[5]={'a','b','c','d','e'};
//cout<<ch[4]<<endl;
for(int j=0;j<5;j++){
    cout<<ch[j]<<" ";
}
    return 0;
}