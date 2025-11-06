#include <iostream>
using namespace std;
class Box{
    public:
    int length;
    int height;
    int breadth;
    Box(){
    length=1;
    breadth=1;
    height=1;
    }
    Box(int l){
    length = l;
    breadth = 1;
    height = 1;
    }
    Box(int l , int b , int h){
    length = l;
    breadth = b;
    height = h;
    }
    void display(){
    int vol = length*breadth*height;
    cout<<"Volume of box is "<<vol<<" cubic units."<<endl;
    }
};
int main(){
    Box b1();
    cout<<"For first constructor, "<<endl;
    b1.display();
    cout<<"For second constructor, "<<endl;
    int l;
    cout<<"Enter length.Both height and breadth are taken unity."<<endl;
    cin>>l;
    box b2(l);
    b2.display();
    cout<<"For third constructor, "<<endl;
    int l1;
    int b;
    int h;
    cout<<"Enter length."<<endl;
    cin>>l1;
    cout<<"Enter breadth."<<endl;
    cin>>b;
    cout<<"Enter height."<<endl;
    cin>>h;
    Box b3(l1,b,h);
    b3.display();
    
    return 0;
}
