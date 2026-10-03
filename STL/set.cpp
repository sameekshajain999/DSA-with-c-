#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(34);
    s.insert(45);
    s.insert(4);
    s.insert(56);
 for(auto i:s){
    cout<<i<<endl;
 }
 s.erase(s.begin());
 for(auto i:s){
    cout<<i<<" ";
 }
 cout<<"count:"<<s.count(56)<<endl;
 set<int>::iterator itr =s.find(5);
 for(auto it=itr;it!=s.end();it++){

 
 cout<<"val is yes or no:"<<*it;
 }


}





