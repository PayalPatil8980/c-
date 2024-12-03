#include<iostream>
using namespace std;

class Area{
    public:
    void area(int a){
        float total=0;
        total=4*a*a;
        cout<<"Area of cub: "<<total<<endl;
    }
    void area(int r,int h){
        float total=0;
        total=2*3.14*r*h;
        cout<<"Area of cylinder: "<<total<<endl;
    }
    void area(int r,float l){
        int total;
        total=3.14*r*l;
        cout<<"Area of cone: "<<total<<endl;
    }
    void area(int b,int h,int l){
        int total;
        total=2*h*(l+b);
        cout<<"Area of cuboid: "<<total<<endl;
    }
};

int main(){
    Area s1;
    s1.area(12);
    s1.area(23,45);
    s1.area(12,23);
    s1.area(12,10,78);
}