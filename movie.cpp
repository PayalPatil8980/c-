#include<iostream>
using namespace std;

class Movie{
    int mid;
    char mtitle[20];
    int tprice;
    int n;
    float totalcost(int tprice);
    public:
    void input(){
        cout<<"Enter the mid: ";
        cin>>mid;
        cout<<"Enter the mtitle: ";
        cin>>mtitle;
        cout<<"Enter the price: ";
        cin>>tprice;
        cout<<"Enter the no of tickets: ";
        cin>>n;
    }
    void display(){
        cout<<"Movie id: "<<mid<<endl;
        cout<<"Movie title: "<<mtitle<<endl;
        cout<<"Ticket price: "<<tprice<<endl;
        cout<<"Total cost: "<<totalcost(tprice)<<endl;
    }
};
float Movie::totalcost(int tprice){
    return n*tprice;
}
int main(){
    Movie s1;
    s1.input();
    s1.display();
}                                                                                                                                                                           