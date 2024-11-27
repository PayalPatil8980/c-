#include<iostream>
using namespace std;

int main(){
    int stud[5],sub[3],i,j,total;
    float per;
    for(i=0;i<5;i++){
        cout<<"Enter the marks of student "<<i+1<<endl;
        
        for(j=0;j<3;j++){
            cout<<"Enter the marks of subject "<<j+1<<":";
            cin>>sub[j]; 
        }
        cout<<"subject 1:"<<sub[0]<<endl;
        cout<<"subject 2:"<<sub[1]<<endl;
        cout<<"subject 3:"<<sub[2]<<endl;
        total=sub[0]+sub[1]+sub[2];
        cout<<"Total is:"<<total<<endl;
        per=total/3;
        cout<<"per is:"<<per<<endl;
        if(per>90){
            cout<<"Grade A";
        }
        else if(per<90 && per>=80)
        {
            cout<<"Grade B";
        }
        else if(per<80 && per>=70){
            cout<<"Grade C";
        }
        else if(per<50 && per>=33){
            cout<<"Pass";
        }
        else{
            cout<<"FAIL";
        }
    }
}