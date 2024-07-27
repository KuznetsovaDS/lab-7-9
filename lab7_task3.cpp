#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;
tuple<double, double, bool> quadr(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    double root1 = 0;
    double root2 = 0;
    bool realRoots = false;
    if (d > 0) {
        root1 = (-b + std::sqrt(d)) / (2 * a);
        root2 = (-b - std::sqrt(d)) / (2 * a);
        realRoots = true;
    }
    else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        realRoots = true;
    }
    else {
        realRoots = false;
    }
    return make_tuple(root1, root2, realRoots);
}
int main() {
    system("chcp 1251");
    double a, b, c;
    cout << "введите a b c ";
    cin >> a >> b >> c;
    tuple<double, double, bool> result = quadr(a, b, c);
    double root1 = get<0>(result);
    double root2 = get<1>(result);
    bool realRoots = get<2>(result);
    if (realRoots) {
        cout << "корни уравнения \n";
        cout << "Корень 1 " << root1 << "\n";
        cout << "Корень 2 " << root2 << "\n";
    }
    else {
        cout << "нет действительных корней";
    }
}