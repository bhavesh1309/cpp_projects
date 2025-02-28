#include<iostream>
using namespace std;
int main(){
    //what is a pointer -->a datatype which is used to store the address of other datatypes .
    int a=3;
    int* b=&a;//declaration of a pointer .
    // address of operator-->&:
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<b<<endl;
    // (value at) dereference operator-->*:
    cout<<"value at address b is "<<*b<<endl;
    cout<<"value at address b is "<<a<<endl;
    //pointer to pointer -->creating a pointer that stores the address of another pointer .
    int** c=&b;
    cout<<"the value at c i.e the address of b "<<c<<endl;
    cout<<"the value at b i.e the address of a "<<*c<<endl;
    cout<<"the value at a is "<<**c<<endl;


    return 0;
}