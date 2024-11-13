#include <iostream>
using namespace std;

class Calc {
private:
    int num1, num2;

public:
    void setNum1(int n) {
        num1 = n;
    }

    int getNum1() {
        return num1;
    }

    void setNum2(int n) {
        num2 = n;
    }

    int getNum2() {
        return num2;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }
};

int main() {
    Calc calculator;
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;
    calculator.setNum1(n1);

    cout << "Enter the second number: ";
    cin >> n2;
    calculator.setNum2(n2);

    cout << "Addition of the two numbers: " << calculator.add() << endl;
    cout << "Subtraction of the two numbers: " << calculator.subtract() << endl;

    return 0;
}
