#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    Rectangle(){
    length=1;
    breadth=1;
    }
    Rectangle(int l, int b){
    length = l;
    breadth = b;
    }
    void area(){
    int area = length*breadth;
    cout<<"Area is "<<area<<" square units."<<endl;
    }
};
int main(){
    Rectangle r1;
    cout<<"For first rectangle, "<<endl;
    r1.area();
    int l;
    int b;
    cout<<"Enter length."<<endl;
    cin>>l;
    cout<<"Enter breadth."<<endl;
    cin>>b;
    Rectangle r2(l,b);
    cout<<"For second rectangle, "<<endl;
    r2.area();
    
    return 0;
}
