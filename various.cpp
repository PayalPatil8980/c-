#include<iostream>
using namespace std;

class Area{
    public:
    Area(double pi,int r){
        float total=0;
        total=pi*r*r;
        cout<<"Area of circle: "<<total<<endl;
    }
    Area(int a){
        float total=0;
        total=a*a;
        cout<<"Area of square: "<<total<<endl;
    }
    Area(int w,float l){
        int total;
        total=w*l;
        cout<<"Area of Reactangle: "<<total<<endl;
    }
    Area(int b,int h){
        int total;
        total=b*h/2;
        cout<<"Area of Triangle: "<<total<<endl;
    }
};

int main(){
    Area s1(3.14,6),s2(34),s3(12,45),s4(12,32);
}