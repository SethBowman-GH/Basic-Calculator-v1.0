#include <iostream>
#include <cmath> // For sqrt() and pow()
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /, ^, sqrt): ";
    cin >> op;

    if (op == 'sqrt') {
        cout << "Enter number: ";
        cin >> num1;
        cout << "sqrt(" << num1 << ") = " << sqrt(num1);
    } else {
        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
            case '/':
                if(num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                else
                    cout << "Error! Division by zero.";
            break;
            case '^':
                cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
            break;
            default:
                cout << "Error! Operator is not correct.";
            break;
        }
    }

    return 0;
}

//
// Created by sbowm on 7/25/2024.
//
