#include <iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    Complex(){
    real=0;
    imag=0;
    }
    Complex(int r){
    real = r;
    imag = 0;
    }
    Complex(int r , int i){
    real = r;
    imag = i;
    }
    void display(){
    cout<<"Complex number is "<<real<<" + i"<<imag<<endl;
    }
};
int main(){
    Complex c1;
    cout<<"For first constructor, "<<endl;
    c1.display();
    cout<<"For second constructor, "<<endl;
    int r;
    cout<<"Enter real part."<<endl;
    cin>>r;
    Complex c2(r);
    c2.display();
    cout<<"For third constructor, "<<endl;
    int r1;
    int i;
    cout<<"Enter real part."<<endl;
    cin>>r1;
    cout<<"Enter imaginary part."<<endl;
    cin>>i;
    Complex c3(r1,i);
    c3.display();
    
    return 0;
}
