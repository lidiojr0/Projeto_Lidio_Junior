#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Getters e Setters
    int getA1() { return A1; }
    void setA1(int value) { A1 = value; }

    float getA2() { return A2; }
    void setA2(float value) { A2 = value; }

    // Métodos
    void MA1() {
        cout << "Método MA1 executado" << endl;
    }

    void MA2() {
        cout << "Método MA2 executado" << endl;
    }

    void MA3() {
        cout << "Alteração a classe A a partir do clone" << endl;
    }

};

int main() {
    A obj;
    obj.setA1(10);
    obj.setA2(3.14);
    obj.MA1();
    obj.MA2();
    return 0;
}
