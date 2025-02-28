#include<iostream>
using namespace std;
//function prototype
int gint(int,int,int,int);
//int gint(int a,int b,int c,int d);--->acceptable
//int gint(a,b,c,d);--->not acceptable
//void g()-->acceptable as nothing means void in c++
int main(){
    int a,b,c,d;
    //a , b , c and d are actual paramters i.e,values passed to the function gint()
    cin>>a>>b>>c>>d;
    cout<<gint(a,b,c,d);
    return 0;
}
//function definition
int gint(int a,int b,int c,int d){
    //a,b,c and d and formal paramters and they take their values form actual parameters ..formal and actual parameters can have both same and different names.
    int max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    return max;
}