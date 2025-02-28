#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="hello";
    string s2="";
    s.replace(2, 3, "xyz"); // "hxyzo"
    s.swap(s2);
    cout<<s<<endl;
    // cout<<s;
    return 0;
}
