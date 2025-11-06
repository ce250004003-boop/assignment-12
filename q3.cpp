#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    int price;
    Car(string b , int p){
    brand = b;
    price = p;
    }
    void display(){
    cout<<"Brand : "<<brand<<" , Price : $"<<price<<endl;
    }
};
int main(){
    string b1;
    int p1;
    cout<<"For first car, "<<endl;
    cout<<"Enter the brand."<<endl;
    cin>>b1;
    cout<<"Enter the price(in dollars)."<<endl;
    cin>>p1;
    Car c1(b1 , p1);
    c1.display();
    string b2;
    int p2;
    cout<<"For second car, "<<endl;
    cout<<"Enter the brand."<<endl;
    cin>>b2;
    cout<<"Enter the price(in dollars)."<<endl;
    cin>>p2;
    Car c2(b2 , p2);
    c2.display();
  
    
    return 0;
}
