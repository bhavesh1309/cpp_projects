#include<iostream>
using namespace std;

class tvshows{
    private : 
    string a,b,c;
    public :
    string d,e;
    void set_tvshows(string,string,string);
    void get_tvshows(){
        cout<<"my fav tv show no.1 is "<<a<<endl;
        cout<<"my fav tv show no.2 is "<<b<<endl;
        cout<<"my fav tv show no.3 is "<<c<<endl;
        cout<<"her fav tv show no.1 is "<<d<<endl;
        cout<<"her fav tv show no.2 is "<<e<<endl;
    }
};
void tvshows :: set_tvshows(string a1,string b1,string c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    string a,b,c,d,e;
    cout<<"enter your fav tv show no.1 "<<endl;
    cin>>a;
    cout<<"enter your fav tv show no.2 "<<endl;
    cin>>b;
    cout<<"enter your fav tv show no.3 "<<endl;
    cin>>c;
    cout<<"enter her fav tv show no.1 "<<endl;
    cin>>d;
    cout<<"enter her fav tv show no.2 "<<endl;
    cin>>e;
    tvshows bhavesh;
    bhavesh.set_tvshows(a,b,c);
    bhavesh.d=d;
    bhavesh.e=e;
    bhavesh.get_tvshows();
    return 0;
}