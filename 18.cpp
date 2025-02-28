//function overloading i.e, compile time polymorphism .
//Function overloading is a feature in C++ that allows multiple functions to have the same name but with different parameter lists (i.e., different number or types of parameters). The compiler determines which function to call based on the arguments provided during the function call.
int volume(int r,int h){
    return (3.14*r*r*h);
}
int volume(int l,int b,int h){
    return (l*b*h);
}
int volume(int a){
    return (a*a*a);
}
#include<iostream>
using namespace std;
int main(){
    cout<<"the volume of cube is "<<volume(6)<<endl;
    cout<<"the volume of cuboid is "<<volume(1,2,3)<<endl;
    cout<<"the volume of cylinder is "<<volume(2,4)<<endl;
    return 0;
}
//functions also typecast arguments to the other in order to get the required return type of the function.