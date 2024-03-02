#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
                return 1; // Exiting the program with an error code
            }
            break;
        default:
            cout << "Error! Invalid operator.";
            return 1; // Exiting the program with an error code
    }

    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result;

    return 0;
}
