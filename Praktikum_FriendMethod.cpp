#include <iostream>
using namespace std;

// Forward declaration
class LayangLayang;

class BelahKetupat {
private:
    float d1, d2, s;

public:
    void input() {
        cout << "--- Input Belah Ketupat ---" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi: "; cin >> s;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 4 * s;
    }

    float kelilingLayang(LayangLayang &l);

    void output() {
        cout << "--- Output Belah Ketupat ---" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }
};

class LayangLayang {
private:
    float d1, d2, s1, s2;

public:
    void input() {
        cout << "--- Input Layang-Layang ---" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1: "; cin >> s1;
        cout << "Sisi 2: "; cin >> s2;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "--- Output Layang-Layang ---" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    friend float BelahKetupat::kelilingLayang(LayangLayang &l);
};