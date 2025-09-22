#include <iostream>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    // Getters e Setters
    string getC1() { return C1; }
    void setC1(string value) { C1 = value; }

    int getC2() { return C2; }
    void setC2(int value) { C2 = value; }

    // Métodos
    void MC1() {
        cout << "Método MC1 executado" << endl;
    }

    void MC2() {
        cout << "Método MC2 executado" << endl;
    }

    void MC3() {
        cout << "Método MC3 executado" << endl;
    }

};

int main() {
    C obj;
    obj.setC1("Teste");
    obj.setC2(123);
    obj.MC1();
    obj.MC2();
    return 0;
}
