#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Getters e Setters
    int getB1() { return B1; }
    void setB1(int value) { B1 = value; }

    float getB2() { return B2; }
    void setB2(float value) { B2 = value; }

    // Métodos
    void MB1() {
        cout << "Método MB1 executado" << endl;
    }

    void MB2() {
        cout << "Método MB2 executado" << endl;
    }

    void MB3() {
        cout << "Método MB3 executado" << endl;
    }

};

int main() {
    B obj;
    obj.setB1(20);
    obj.setB2(6.28);
    obj.MB1();
    obj.MB2();
    return 0;
}
