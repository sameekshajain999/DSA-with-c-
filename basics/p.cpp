#include<iostream>
using namespace std;
void pp(int &n){
    
  
    cout<<n<<endl;
    n++;
    cout<<"add::"<<n<<endl;

}
int main(){
    int n=5;


    cout<<n<<endl;
pp(n);
cout<<"after call the reference::"<<n<<endl;
}