// Calculator Programme

#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    double calculate() {
        if (operation == "+")
            return a + b;
        else if (operation == "-")
            return a - b;
        else if (operation == "×")
            return a * b;
        else if (operation == "÷") {
            if (b != 0)
                return a / b;
            else {
                cout << "Error: Division by zero\n";
                return 0;
            }
        } else {
            cout << "Invalid Operation\n";
            return 0;
        }
    }
};

int main() {
    Calculator c;

    cout << "Enter a: ";
    cin >> c.a;

    cout << "Enter b: ";
    cin >> c.b;

    cout << "Enter operation (+/-/×/÷): ";
    cin >> c.operation;

    cout << "Result = " << c.calculate() << endl;

    return 0;
}
