#include<iostream>
using namespace std;
int main(){
    // declear
    int arr[2][3];
    //initilize the array
    int array [2][3]={{1,2,3},{55,56,67}};
    int row=2;
    int col=3;
    //access
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<array[i][j]<<" ";
        }
    }
    //input;
    int simo[3][3];
    int rowno=3;
    int colno=3;
    for(int k=0;k<rowno;k++){
        for(int l=0;l<colno;l++){
            cout<<"enter element in 2D"<<" row index"<<k<<"col index "<<l ;
            cin>>simo[k][l];
            
        }
        cout<<endl;
    }

}