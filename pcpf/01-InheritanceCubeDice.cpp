#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

class Cube {
    public:
        Cube() {
            cout << "Enter length: ";
            cin >> length;
        }
    void calarea() {
        area = length * length * 6;
        cout << "Area is " << area << endl;
    }
    void calvol() {
        volume = length * length * length;
        cout << "Volume is " << volume << endl;
    }
    private:
        int length;
    int area;
    int volume;
};

class Dice: public Cube {
    public: void playRandom() {
        srand(time(NULL));
        int random = (rand() % 6) + 1;
        cout << "Dice reads " << random;
    }
};

int main() {
    Dice d;
    d.calarea();
    d.calvol();
    d.playRandom();
    return 0;
}