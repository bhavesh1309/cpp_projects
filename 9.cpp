#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2)
        break;
        cout<<i<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2)
        continue;
        cout<<i<<endl;
    }
    //break is used to come out of the loop after its executed.
    //continue on the ohter hand just skips the current iteration of the loop.
    
    
    return 0;
}