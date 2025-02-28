#include<iostream>
using namespace std;
int swapvalue(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int swappointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int swapbyrefvar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int & returnbyref(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int a=4,b=5;
    // cout<<"the value of a is : "<<a<<" and b is : "<<b<<" before swapping"<<endl;
    // swapvalue(a,b);//it doesn't works and swaps the values as the values changes temperorily inside swap func but not permenantly on memory address.
    // cout<<"the value of a is : "<<a<<" and b is : "<<b<<" after using swapvalue"<<endl;
    // swappointer(&a,&b);//it works as it changes the value at address by using a pointer
    // cout<<"the value of a is : "<<a<<" and b is : "<<b<<" after using swappointer"<<endl;
    // swapbyrefvar(a,b);//this also works as it uses reference var to change value at memory address
    // cout<<"the value of a is : "<<a<<" and b is : "<<b<<" after using swapbyrefvar"<<endl;
    //return by reference:
    returnbyref(a,b)=755;//makes the value of a=755 as this retruns the reference var a and it gets changes 
    cout<<"the value of a is "<<a<<" b is "<<b;
   return 0;
}