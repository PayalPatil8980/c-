#include<iostream>

using namespace std;

class Test{
    private:
    int testcode;
    char desc[50];
    int nocandidate;
    int centerreq;
    int calcntr(int nocandidate);

    public:
    void schedul(){
        cout<<"Enter test code:";
        cin>>testcode;
        cout<<"Enter description:";
        cin>>desc;
        cout<<"Enter Nocandidate:";
        cin>>nocandidate;
    }
    void dispet(){
        cout<<"Test code:"<<testcode<<endl;;
        cout<<"Description:"<<desc<<endl;
        cout<<"Nocandidate:"<<nocandidate<<endl;
        centerreq=calcntr(nocandidate);
        cout<<"The no of Center:"<<centerreq;
    }
};
int Test::calcntr(int nocandidate){
    centerreq=nocandidate/(100+1);
    return centerreq;
}
int main(){
    Test s1;
    s1.schedul();
    s1.dispet();
}