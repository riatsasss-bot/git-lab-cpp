#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "a + b = " << add(a, b) << endl;
    cout << "a - b = " << sub(a, b) << endl;
cout << "a * b = " << mul(a, b) << endl;
cout << "a / b = " << divide(a, b) << endl;
    return 0;
}