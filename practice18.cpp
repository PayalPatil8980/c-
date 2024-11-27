#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the no: ";
    cin>>a;
    if(a%5==0 && a%3==0){
        cout<<"value is divide by 3 and 5";
    }
    else{
        cout<<"value is not divide by 3 and 5";
    }
}