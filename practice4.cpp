#include<iostream>
using namespace std;
int main(){
      int unit;
      float rate,total,bill;
      cout<<"Enter the unit";
      cin>>unit;
      if(unit>=1 && unit<=100){
        rate=unit*0.60+50;
      }
      else if (unit>=101 && unit<=200)
      {
        rate=unit*0.80+50;
      }
      else if (unit>=201 && unit<=300)
      {
        rate=unit*0.90+50;
      }
      else{
        cout<<"bill is correct";
      }
      cout<<""
}