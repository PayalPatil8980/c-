#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no:";
    cin>>a;
    if(a<0){
        cout<<"No is negetive";
    }
    else if(a>0){
        cout<<"No is positive";
    }
    else{
        cout<<"No is zero";
    }
}