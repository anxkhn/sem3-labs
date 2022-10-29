#include <iostream>

using namespace std;
class A
{
public:
    int x;
    void getx()
    {
        cout << "enter value of x: ";
        cin >> x;
    }
};
class B
{
public:
    int y;
    void gety()
    {
        cout << "enter value of y: ";
        cin >> y;
    }
};
class C : public A, public B // C is derived from class A and class B
{
public:
    void compute()
    {
        cout << "Sum = " << x + y << endl;
        cout << "Multiplication = " << x * y << endl;
        cout << "Division = " << x / y << endl;
        cout << "Subtraction = " << x - y << endl;
    }
};

int main()
{
    C obj1; // object of derived class C
    obj1.getx();
    obj1.gety();
    obj1.compute();
    return 0;
} // end of program
