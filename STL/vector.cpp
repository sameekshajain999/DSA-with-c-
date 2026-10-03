#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    // size is 0 at that time
    cout<<"size iis::"<<v.capacity()<<endl;
    v.push_back(23);
    cout<<v.capacity()<<endl;
    v.push_back(15);
    v.push_back(48);
    v.push_back(98);
    cout<<v.at(2)<<endl;
    cout<<"before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl;
    cout<<"after pop:"<<endl;
    for(int i:v){
        //after pop
        cout<<i<<" ";
        cout<<endl;
    }
    vector<int>a(5,1);
    for(int j:a){
        cout<<j<<" ";
    }
}