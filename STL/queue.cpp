#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("i can do because i always do");
    q.push("i am winner");
    q.push("keep doing ,one day you will get all of these");
    cout<<" first element:"<<q.front()<<endl;
    q.pop();
    cout<<"after pop:"<<q.front()<<endl;
}