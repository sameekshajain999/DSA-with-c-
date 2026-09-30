#include<iostream>
using namespace std;
void intersection ( int a1[],int n,int a2[],int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a1[i]<a2[j]){
                i++;
            }
            else if(a1[i]==a2[j]){
                cout<<a1[i]<<endl;
                i++;
                j++;
            } else if(a1[i]>a2[j]){
                j++;
            }
        }
    }

}
int main(){
    int a1[]={1,2,2,2,3,4};
    int n=6;
    int a2[]={2,2,3,2};
    int m=4;
    intersection(a1,n,a2,m);
    return 0;
}