#include<iostream>
#include<cstring>
using namespace std;
int main(){
    //for coopy the array
    char actual[]="babbar";
    char ans[100];//yaha copy karna hai
    strcpy(ans,actual);
    cout<<"copy::"<<ans<<endl;
    //lenth
   cout<<"lenth of actual :"<< strlen(actual)<<endl;
   // concatination
   char second[50]="labbu";
   cout<<"concate operation:"<<strcat(actual,second)<<endl;
   //compare
   cout<<"concatination::"<<strcmp(actual,second);
   
}