#include <iostream>
#include <cmath>
int main() {
    using namespace std;

    double y;
    cout << "Podaj wartosc zmiennej: ";
         cin >> y;
    double x;
    x = pow(6.1277/y, 337.0/1000.0);
    cout << "Wyrazenie przyjmuje wartosc: " << x << endl;
    return 0;
}