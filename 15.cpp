//static variable :
int prod(){
static int x=0;//this will only run once.
x+=1;//function will retain the value of x everytime it is called .
return x;}
//inline function : inline is a request made by the user to the compiler which if reasonable is granted by it .
//use of inline function : to reduce compilation time and make the code faster .
//inline func copies the entie function body at the point where the function is being called .
//when to make a function inline : the the function has minimal lines of code .
/*when not to make a function inline :
1.when the fucntion is complex with loops and all .
2.when the fucntion contains static variable in it .
3.when the function is recurrsive . */
inline int sum(int a,int b){
    return (a+b);
}
//default arguments:
float moneyreceived(int currentmoney,float rate=1.04){
    return (currentmoney*rate);
}
//if no argument is given the function itself takes the value provided to it by default by formal argument.
//never write default argument in the starting , always write them at the end .
//constant argument is made by writing the keyword const infornt of the argument which ensure that no matter what the function does the value of the argument remains same after the function execution , mostly used with call by reference or call by pointers case. 
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++)
    cout<<prod()<<endl;
    cout<<sum(10,20)<<endl;
    cout<<moneyreceived(10000)<<endl;
    cout<<moneyreceived(10000,1.1);
    return 0;
}

