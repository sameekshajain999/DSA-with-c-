#include<iostream>
#include<climits>
using namespace std;
int getmax(int num[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,num[i]);
      /* or   if(num[i]>max){
            max=num[i];*/
        //}
    }
    return maxi;
}
int getmin(int num[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
            /*if(num[i]<min){
                min=num[i];
            }
        */

        mini=max(mini,num[i]);

    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cout<<"enter the number:"<<num[i]<<endl;
        cin>>num[i];
    }
    cout<<"max val is::"<<getmax(num,n)<<endl;
    cout<<"min val is::"<<getmin(num,n)<<endl;
    return 0;
}