#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
d.push_back(23);
d.push_front(15);
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
d.pop_back();
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
d.push_back(99);
d.push_back(67);
cout<<"now the new elements add :";
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
cout<<d.at(0)<<endl;
}