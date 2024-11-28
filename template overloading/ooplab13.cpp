#include <iostream>
using namespace std;


template <typename T>
T add(T a, T b) {
    return a + b;
}


template <>
string add<string>(string a, string b) {
    return a + " " + b;
}

class Calculator {
public:
    
    template <typename T>
    T calculate(T a, T b) {
        return add(a, b); 
    }
};

int main() {
    Calculator calc;

    
    int resultInt = calc.calculate(10, 20);
    cout << "Sum of integers: " << resultInt << endl;

    
    double resultDouble = calc.calculate(10.5, 20.7);
    cout << "Sum of doubles: " << resultDouble << endl;

    
    string resultString = calc.calculate(string("Hello"), string("World"));
    cout << "Concatenated string: " << resultString << endl;

    return 0;
}
