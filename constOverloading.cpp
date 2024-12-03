#include<iostream>
using namespace std;

class Hello{
    public:
    Hello(){
        cout<<"Default constructor"<<endl;
    }
    Hello(int a){
        cout<<"Value of a: "<<a<<endl;
    }
    Hello(int a,int b){
        cout<<"Value of a+b : "<<a+b<<endl;
    }
    Hello(int a,double b){
        cout<<"Value of a: "<<a+b<<endl;
    }
    Hello(int a,double b,char c){
        cout<<"Value of a: "<<a+b;
    }
};
int main(){
    Hello s1,s2(10),s3(10,20),s4(10,20.0),s5(10,40.0,'a');

}