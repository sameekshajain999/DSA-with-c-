#include<iostream>
using namespace std;
int lengtharr(char arr[]){
    int count=0;
    int index=0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    return count;
}
void  concate(char a[],char b[]){
    int aindex=lengtharr(a);
    int bindex=0;
    while(b[bindex]!='\0'){
        a[aindex]=b[bindex];
        aindex++;
        bindex++;


    }
    a[aindex]='\0';
}
void copyarr(char actual[],char newcopy[]){
    int aind=0;
    int bind=0;//copied array
    while(actual[aind]!='\0'){
        //start coping
        //two pointer approach
      newcopy[bind]=actual[aind];
      aind++;
      bind++;
    }
    newcopy[bind]='\0';


}
bool comparearray(char first[],char second[]){
    int aindexx=0;
    int bindexx=0;
    int alenn=lengtharr(first);
    while(first[aindexx]<=alenn){
        if(first[aindexx]!=second[bindexx]){
            
            return false;
        }else{
            aindexx++;
            bindexx++;
            
        }
return true;
    }
}
int main(){
     char arr[]="sameeksha";
    cout<<"lenth is:"<<lengtharr(arr)<<endl;
    char a[50]="simo";
    char b[50]="jain";
    concate(a,b);
   cout<<"print a is:"<<a<<endl;
   char actual[100]="bhopal";
   char ans[100];
   copyarr(actual,ans);
   cout<<"printing ans array:"<<ans<<endl;
   char first[50]="sameeksha";
   char second[50]="sameeksh";
   cout<<"cimparison result:"<<comparearray(first,second)<<endl;

   
    
    return 0;
}
