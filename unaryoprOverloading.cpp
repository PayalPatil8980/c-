#include<iostream>
using namespace std;
class Complex{
    int x,y;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
    }
    void printdata(){
        cout<<"Value of x:"<<x<<endl;
        cout<<"Value of y:"<<y<<endl;

    }
    void operator-(){
        x=+x;
        y=+y;
    }
};

int main(){
    class Complex s1;
    s1.getdata(-6,-9);
    s1.printdata();
    cout<<"After function call"<<endl;
    -s1;
    s1.printdata();
}