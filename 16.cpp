//recurrsive function for factorial :
#include<iostream>
using namespace std;
int fact(int a){
    if(a==1||a==0)
    return 1;
    else if(a>1)
    return a*fact(a-1);
    else{
    cout<<"factorial is not defined";
    return -1;}
    }
int main(){
    int a;
    cout<<"enter the no. "<<endl;
    cin>>a;
    if(fact(a)!=-1)
    cout<<"the factorial of "<<a<<" is "<<fact(a);
    return 0;
}