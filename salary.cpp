#include<iostream>
using namespace std;

class Sal{
    int sal;
    float gross,hra,da;
    float calsal(float gross);
    public:
    void input(){
        cout<<"Enter the salary:";
        cin>>sal;
    }
    void printdata(){
        if(sal>1 && sal<=5000){
            hra=sal*8/100;
            da=sal*20/100;
            gross=sal+hra+da;
        }
        else if(sal>5000 && sal<=10000){
            hra=sal*12/100;
            da=sal*30/100;
            gross=sal+hra+da;
        }
        else if(sal>10000 && sal<=15000){
            hra=sal*15/100;
            da=sal*40/100;
            gross=sal+hra+da;
        }
        else if(sal>=15000){
            hra=sal*8/100;
            da=sal*20/100;
            gross=sal+hra+da;
        }
        else{
            cout<<"salary not acceptable";
        }
        cout<<"gross salary of employee:"<<gross;
    }
};
int main(){
    Sal s1;
    s1.input();
    s1.printdata();
}