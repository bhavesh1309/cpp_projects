//recurrsive function for fibonacci series:
#include<iostream>
using namespace std;
int fib(int n){
    if(n>1)
    return (fib(n-1)+fib(n-2));
    else if(n==1)
    return 1;
    else if(n==0)
    return 0;
}
int main(){
    int n;
    cout<<"enter the no. "<<endl;
    cin>>n;
    cout<<"the fibonacci series for "<<n<<" is "<<fib(n);
    return 0;
}