#include<iostream>
using namespace std;
int main(){
    // structure--->it is a datastructure like array but is used to store distinct datatypes .
    typedef struct employee
    {
        /* data */
        int eId;
        char assignedalphabet;
        float salary;
    }ep;//typedef is used to give a short abbreviation to the name of ur struct like integer is int similarly.
    ep harry;
    harry.eId=4;
    harry.assignedalphabet='a';
    harry.salary=120000.987;
    cout<<harry.eId<<endl<<harry.assignedalphabet<<endl<<harry.salary<<endl;

    //union--->it shares the memory between the values provided to it i.e., it only reserves the memory the sizeof of the largest datatype.
        union money{
        int ruppee;//4 byte
        char car;//1 byte
        float pound;//4 byte , the only 4 byte will be reserved .
    };
    union money m1;
    m1.ruppee=22;
    m1.car='j';//only one of the datatype can be used at a time and also it'll be prioritised in bottom to top.
    cout<<m1.pound;

    //enum in c++-->
    enum Color { red, green, blue };
    Color r = red;
     
    switch(red)
    {
        case red  : cout << "red\n";   break;
        case green: cout << "green\n"; break;
        case blue : cout << "blue\n";  break;
    }

return 0;
}
