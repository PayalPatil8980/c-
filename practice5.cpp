#include<iostream>
using namespace std;
int main(){
    int sal;
    float gross,hra,da;
    cout<<"Enter salary:";
    cin>>sal;
    if(sal>1 && sal<=5000){
        hra=sal*8/100;
        da=sal*20/100;
        gross=sal+da+hra;
    }
    else if(sal>5000 && sal<=10000){
        hra=sal*12/100;
        da=sal*30/100;
        gross=sal+da+hra;
    }
    else if(sal>10000 && sal<=15000){
        hra=sal*15/100;
        da=sal*40/100;
        gross=sal+da+hra;
    }
    else if(sal>=15000){
        hra=sal*20/100;
        da=sal*50/100;
        gross=sal+da+hra;
    }else{
        cout<<"Salary is not accepted";
    }
    cout<<"gross salary is :"<<gross;
}