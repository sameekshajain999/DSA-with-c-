#include<iostream>
using namespace std;
// 2d array me colsize hamesha batate hai
void printarr(int arr[][3],int rowsize,int colsize){
    cout<<"printing the 2d array"<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<"row no:"<<i<<"col no:"<<j<<" ";
            
        }
        cout<<endl;
         
    }
    
   
}
int main(){
    int arr[3][3];
    int rowsize=3;
    int colsize=3;
    printarr(arr,3,3);
    cout<<arr[3][3]<<endl;
    return 0;
}
