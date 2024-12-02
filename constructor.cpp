#include<iostream>
using namespace std;

class Demo{
   
    int a;
    int b;
    public:
    Demo(){
        cout<<"Enter A:";
        cin>>a;
        cout<<"Enter B:";
        cin>>b;
    }
    void printdata(){
        cout<<"A:"<<a<<endl;
        cout<<"B:"<<b<<endl;
    }
    ~Demo(){
        cout<<"destructor is call";
    }
};
int main(){
    Demo s1;
    s1.printdata();
}