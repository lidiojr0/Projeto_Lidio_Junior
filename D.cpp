#include <iostream>
using namespace std;

class D {
private:
    int D1;
    float D2;

public:
    // Getters e Setters
    int getD1() { return D1; }
    void setD1(int value) { D1 = value; }

    float getD2() { return D2; }
    void setD2(float value) { D2 = value; }

    // Métodos
    void MD1() {
        cout << "Método MD1 executado" << endl;
    }

    void MD2() {
        cout << "Método MD2 executado" << endl;
    }
};

int main() {
    D obj;
    obj.setD1(50);
    obj.setD2(7.5);
    obj.MD1();
    obj.MD2();
    return 0;
}
