#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a={11,23,45,67};
    int size=a.size();
    //access
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"at operation:"<<a.at(3)<<endl;
    cout<<"array empty hai ya nahi:"<<a.empty()<<endl;
    cout<<"first element is:"<<a.front()<<endl;
    cout<<"last element::"<<a.back()<<endl;
}