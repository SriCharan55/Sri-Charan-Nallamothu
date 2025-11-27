#include <iostream>
using namespace std;

class Calculator {
public:
    double calculate(double a, double b, string op) {
        if (op == "add") return a + b;
        if (op == "sub") return a - b;
        if (op == "mul") return a * b;
        if (op == "div") return a / b;
        cout << "Invalid operation";
        return 0;
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operation (add/sub/mul/div): ";
    cin >> op;

    Calculator c;
    double result = c.calculate(a, b, op);
    cout << "Result = " << result;

    return 0;
}
