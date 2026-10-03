#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int>maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(2);
    maxi.push(23);
    maxi.push(48);
    maxi.push(78);
    cout<<"size :"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();

    }
    cout<<endl;
    mini.push(3);
    mini.push(34);
    mini.push(66);
    int m=mini.size();
    for(int j=0;j<n;j++){
        cout<<mini.top()<<endl;
        mini.pop();
    }cout<<endl;

}
