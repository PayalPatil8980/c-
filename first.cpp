#include<iostream>
using namespace std;

class Student{
    protected:
    int b=20;
    private:
    int c=30;
    public:
    int a=10;
    void getdata(){
        cout<<b<<"||"<<c;
    }
};
int main(){
    Student s1;
    cout<<s1.a<<endl;
    s1.getdata();
}