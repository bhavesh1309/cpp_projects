#include<iostream>
using namespace std;
int main()
{
    //'<<' this is called the insertion operator
    //">>"this is called the extraction operator
    int num1 , num2;
    /*cout<<"enter the vlaue of num1"<<"enter the vlaue of num2";
    cin>>num1>>num2;
    cout<<"the addition of num1+num2="<<num1+num2; 
    this code snippet is correct but it makes it messy */
    cout<<"enter the vlaue of num1 : ";
    cin>>num1;
    cout<<"enter the vlaue of num2 : ";
    cin>>num2;
    cout<<"the addition of num1+num2 = "<<num1+num2;
    return 0;
}
