#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping:"<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
}