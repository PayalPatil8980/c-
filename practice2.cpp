#include<iostream>
using namespace std;

int main(){
    int rate,qty,amount,billam,netbill;
    float discount,gst;
    cout<<"Enter Rate:";
    cin>>rate;
    cout<<"Enter qty:";
    cin>>qty;
    amount=rate*qty;
    discount=amount*5/100;
    billam=amount-discount;
    gst=billam*18/100;
    netbill=billam+gst;
    cout<<"------------------"<<endl;
    cout<<"Rate: "<<rate<<endl;
    cout<<"Qty: "<<qty<<endl;
    cout<<"Amount: "<<amount<<endl;
    cout<<"Discount: "<<discount<<endl;
    cout<<"Billamout: "<<billam<<endl;
    cout<<"Gst: "<<gst<<endl;
    cout<<"Netbill: "<<netbill<<endl;
}