#include<iostream>
using namespace std;
int main(){
    string str="sameeksha";
    string temp="jain";

cout<<"length nikalana::"<<str.length()<<endl;
//append= iska use last me add karne ke liye hota hai
str.append(temp);
cout<<"after append::"<<str<<endl;
//insertpos,t=isme kisi bhi position pr tum dal sakte ho
str.insert(0,temp);
cout<<"after insert::"<<str<<endl;
// sub string ko nikalne ke liye
str.substr(3,5);
cout<<"substring ke lie:::"<<str<<endl;
// compare
if(str.compare(temp)==0)
{
    cout<<"string are equals::"<<endl;
}else{
    cout<<"not equals::"<<endl;
    //find
    str.find(temp);
    cout<<"find out"<<str<<endl;
}
}