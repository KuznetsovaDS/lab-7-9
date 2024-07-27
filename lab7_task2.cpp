#include <iostream>
#include <cmath>
using namespace std;

struct Root {
    double root1;
    double root2;
    bool realRoots;
};
Root quadr(double a, double b, double c) {
    Root result;
    double d = b * b - 4 * a * c;
    if (d > 0) {
        result.root1 = (-b + sqrt(d)) / (2 * a);
        result.root2 = (-b - sqrt(d)) / (2 * a);
        result.realRoots = true;
    }
    else if (d == 0) {
        result.root1 = result.root2 = -b / (2 * a);
        result.realRoots = true;
    }
    else {
        result.realRoots = false;
    }

    return result;
}
int main() {
    system("chcp 1251");
    double a, b, c;
    cout << "Введите a b c " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a == 0) {
        cout << "не квадратное уравнение" << endl;
    }
        Root root = quadr(a, b, c);

        if (root.realRoots) {
            cout << "Корни уравнения ";
            if (root.root1 == root.root2) {
                cout << "x1 = x2 = " << root.root1 << endl;
            }
            else {
                cout << "x1 = " << root.root1 << " x2 = " << root.root2 << endl;
            }
        }
        else {
            cout << "нет действительных корней" << endl;
        }

    }
    