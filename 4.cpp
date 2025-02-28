//there are two types of header files :
//system header files : they come with the compiler
#include<iostream>
//user defined header files: written by the user
/*#include "this.h"
"this.h" must be present in your current directory for the program to run */
using namespace std;
int main(){
    int a=5;
    int b=6;
    cout<<"operators in c"<<endl;
    cout<<"arithmetic operators"<<endl;
    cout<<"the value of a + b ="<<a+b<<endl;
cout<<"the value of a - b ="<<a-b<<endl;
cout<<"the value of a * b ="<<a*b<<endl;
cout<<"the value of a / b ="<<a/b<<endl;
cout<<"the value of a % b ="<<a%b<<endl;
cout<<"the value of a + + ="<<a++<<endl;
cout<<"the value of a - - ="<<a--<<endl;//the value of a is being post decremented in the previous line i.e, a=6
cout<<"the value of + + a ="<<++a<<endl;
cout<<"the value of - - a ="<<--a<<endl;
//assignment operators :used for assigning values to the variables 
//int a=0,b=9;
//char d='d';

//comparison operators :
cout<<"the value of a==b is "<<(a==b)<<endl;
cout<<"the value of a!=b is "<<(a!=b)<<endl;
cout<<"the value of a<=b is "<<(a<=b)<<endl;
cout<<"the value of a>=b is "<<(a>=b)<<endl;
cout<<"the value of a<b is "<<(a<b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;

//logical operators :
cout<<"this is logical and (&&) :"<<((a==b)&&(a<b))<<endl;
cout<<"this is logical or (||) :"<<((a==b)||(a<b))<<endl;
cout<<"this is logical not (!) :"<<(!(a==b))<<endl;
// int c=a++;
// int d=++a;
// cout<<c<<endl<<d;
return 0;
} 