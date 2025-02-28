#include<iostream>  
using namespace std;
int glo=5;//this is a global variable
void gb(){//this is a void func.
   glo=1;//now gb gets to print 1 as it is given to it locally
   cout<<"\n"<<glo;
}
int main()
{
    cout<<glo;//prints 5 as the flow of control dosent access a updated glo var.
    int glo=8;//this is a local variable
    glo=9;//value of the variable glo was updated locally
    cout<<"\n"<<glo;//prints the updated value of the global variable
    cout<<glo;
    cout<<"\nthis program will tell about local variables , global variables , and differet user defined datatypes\n"<<"this is newline";
    gb();

    return 0;
}
