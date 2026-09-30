#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(int binary){
    int decimal=0;
    int i=0;
    while(binary>0){
        int bit=binary%10;
        decimal=decimal+bit*pow(2,i++);
        binary/=10;

    }
    return decimal;
}
int main(){
    int binary=1010;
    int convert=binarytodecimal(1010);
    return 0;
}