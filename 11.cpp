#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int marks[]={11,22,33,44};//you dont need to specify the size while initializing with values .
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     //we can also manually input array marks :
//     int mathmarks[4];//we must specify the size while declaring an array.
//     mathmarks[0]=123;
//     mathmarks[1]=1234;
//     mathmarks[2]=1235;
//     mathmarks[3]=1236;

//     //printing values of mathmarks with for loop :(always put the condition with regard to indexing):
//     for (int i = 0; i < 4; i++)
//     {
//         /* code */
//         cout<<mathmarks[i]<<endl;
//     }
//     // using while loop :
//     int i=0;
//     while(i<4){
//     cout<<mathmarks[i]<<endl;
//     i++;}
//     //using do-while loop :
//     int i=0;
//     do{
//         cout<<mathmarks[i]<<endl;
//         i++;
//     }
//     while(i<4);
    
    // pointer arithmetic---> newaddress=currentaddress+i*sizeof(datatype) :
    //for an array say marks the address of marks isn't &(marks) but marks in itself only
    int* p=marks;
    cout<<"value of *p is "<<setw(6)<<*p<<endl;
    cout<<"value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"value of *(p+3) is "<<*(p+3)<<endl;
    
    return 0;
}