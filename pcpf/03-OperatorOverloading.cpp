#include <iostream>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex(int a, int b){
        real = a;
        img = b;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void operator !(){
        Complex z(real, img);
        z.real = real;
        z.img = -img;
        z.display();
    }
     void operator &(){
        Complex z(real, img);
        z.real = -real;
        z.img = -img;
        z.display();
    }
    void operator +(Complex y){
        Complex z(real, img);
        z.real = real + y.real;
        z.img = img + y.img;
        z.display();
    }
    void operator -(Complex y){
        Complex z(real, img);
        z.real = real - y.real;
        z.img = img - y.img;
        z.display();
    }
    void operator *(Complex y){
        Complex z(real, img);
        z.real = real*y.real - img*y.img;
        z.img = real*y.img + img*y.real;
        z.display();
    }
};
int main() {
    Complex c(1,2), d(3,4);
    // c.real = 5;
    // c.img = 6;
    // d. real = 12;
    // d.img = 15;
    c.display();
    &c;
    !c;
    !d;
    c+d;
    c-d;
    c*d;
    return 0;
}
