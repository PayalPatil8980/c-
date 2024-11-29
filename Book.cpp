#include<iostream>

using namespace std;

class Book{
    private:
    int bookno;
    char booktitle[20];
    float price;
    float totalcost();
    public:
    void input(){
        cout<<"Enter book no:";
        cin>>bookno;
        cout<<"Enter booktitle:";
        cin>>booktitle;
        cout<<"Enter book no:";
        cin>>price;
    }
    void purchase(){
        
    }
};

int main(){

}