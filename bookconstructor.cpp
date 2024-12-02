#include<iostream>

using namespace std;

class Book{
    int bookno,n;
    char booktitle[20];
    float price;
    float totalcost(float price);
    public:
    Book(){
        cout<<"Enter bookno:";
        cin>>bookno;
        cout<<"Enter book title:";
        cin>>booktitle;
        cout<<"Enter price:";
        cin>>price;
    }
    void purchase(){
        cout<<"Enter the no of copies you want:";
        cin>>n;
        cout<<totalcost(price)<<endl;
    }
    ~Book(){
        cout<<"Destructor is call";
    }
};

float Book::totalcost(float price){
    return price*n;
}


int main(){
    Book s1;
    s1.purchase();
}