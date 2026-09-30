#include<iostream>
#include<cmath>
using namespace std;
int decimaltobinary(int decimal){
    int binary=0;
     int i=0;
    while(decimal>0){
        int bit=decimal %2;
        
        binary=bit*pow(10,i++)+binary;
        decimal=decimal/2;
    }
    return binary;
}
int main(){
    int decimal=23
    ;
    cin>>decimal;
    int binary=decimaltobinary(23);
    cout<<binary;

}