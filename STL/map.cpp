#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="sameeksha";
m[2]="jain";
m[11]="simo";
m.insert({5,"always winner"});
for(auto i:m){
    cout<<i.first<<" ";

}
cout<<"val is yes or no:"<<m.count(11)<<endl;
m.erase(2);
cout<<"after erase:"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

}