#include<iostream>
using namespace std;
int square(int element){
    int start=0;
    int end=element;
    long long  mid=start+(end-start)/2;
    long long ans=-1;
    while(start<=end){   
        long long square=mid*mid;
        if(square==element){
            return mid;
        } else if(square<element){
            ans=mid;
            start=mid+1;
        }else if((mid*mid)>element)
     {
        end=mid-1;
     }
     mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int element=36;
    cout<<square(element)<<endl;
    return 0;

}