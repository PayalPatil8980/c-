#include<iostream>
using namespace std;

class Hello{
    public:
    void test(){
        cout<<"Default constructor"<<endl;
    }
    void test(int a){
        cout<<"Value of a: "<<a<<endl;
    }
    void test(int a,int b){
        cout<<"Value of a+b : "<<a+b<<endl;
    }
    void test(double a,double b){
        cout<<"Value of a: "<<a+b<<endl;
    }
    void test(int a,double b,char c){
        cout<<"Value of a: "<<a+b<<c;
    }
};
int main(){
    Hello s1;
    s1.test();
    s1.test(10);
    s1.test(20,50);
    s1.test(89.67,56.54);
    s1.test(50,65.0,'a');

}