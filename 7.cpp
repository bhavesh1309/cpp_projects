#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    //if else ladder :
    // if(n==1)
    // cout<<"one"<<endl;
    // else if(n==2)
    // cout<<"two"<<endl;
    // else if(n==3)
    // cout<<"three"<<endl;
    // else if(n==4)
    // cout<<"four"<<endl;
    // else if(n==5)
    // cout<<"five"<<endl;
    // else if(n==6)
    // cout<<"six"<<endl;
    // else if(n==7)
    // cout<<"seven"<<endl;
    // else if(n==8)
    // cout<<"eight"<<endl;
    // else if(n==9)
    // cout<<"nine"<<endl;
    // else
    // cout<<"Greater than 9"<<endl;
    
    //switch case statements :
    switch(n){
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;
        case 4:
        cout<<"four";
        break;
        case 5:
        cout<<"five";
        break;
        case 6:
        cout<<"six";
        break;
        case 7:
        cout<<"seven";
        break;
        case 8:
        cout<<"eight";
        break;
        case 9:
        cout<<"nine";
        break;
        default:
        cout<<"Greater than 9";
        break;
    }

    return 0;
}