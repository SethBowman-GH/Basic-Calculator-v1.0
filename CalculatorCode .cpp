#include <iostream>
#include <cmath> // For sqrt(), pow(), log(), sin(), cos(), tan(), etc.
using namespace std;

void showMenu() {
    cout << "Select operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exponentiation (^)" << endl;
    cout << "6. Square Root (sqrt)" << endl;
    cout << "7. Logarithm (log)" << endl;
    cout << "8. Sine (sin)" << endl;
    cout << "9. Cosine (cos)" << endl;
    cout << "10. Tangent (tan)" << endl;
    cout << "11. Arcsine (asin)" << endl;
    cout << "12. Arccosine (acos)" << endl;
    cout << "13. Arctangent (atan)" << endl;
    cout << "14. Convert Degrees to Radians (deg2rad)" << endl;
    cout << "15. Convert Radians to Degrees (rad2deg)" << endl;
    cout << "Enter your choice: ";
}

double deg2rad(double degrees) {
    return degrees * M_PI / 180.0;
}

double rad2deg(double radians) {
    return radians * 180.0 / M_PI;
}

int main() {
    int choice;
    double num1, num2;

    showMenu();
    cin >> choice;

    switch (choice) {
        case 1: // Addition
        case 2: // Subtraction
        case 3: // Multiplication
        case 4: // Division
        case 5: // Exponentiation
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            break;

        case 6: // Square Root
        case 7: // Logarithm
        case 8: // Sine
        case 9: // Cosine
        case 10: // Tangent
        case 11: // Arcsine
        case 12: // Arccosine
        case 13: // Arctangent
            cout << "Enter a number: ";
            cin >> num1;
            break;

        case 14: // Degrees to Radians
        case 15: // Radians to Degrees
            cout << "Enter value: ";
            cin >> num1;
            break;

        default:
            cout << "Error! Invalid choice." << endl;
            return 1;
    }

    switch (choice) {
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        case 5:
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
            break;
        case 6:
            cout << "sqrt(" << num1 << ") = " << sqrt(num1);
            break;
        case 7:
            cout << "log(" << num1 << ") = " << log(num1);
            break;
        case 8:
            cout << "sin(" << num1 << " radians) = " << sin(num1);
            break;
        case 9:
            cout << "cos(" << num1 << " radians) = " << cos(num1);
            break;
        case 10:
            cout << "tan(" << num1 << " radians) = " << tan(num1);
            break;
        case 11:
            cout << "asin(" << num1 << ") = " << rad2deg(asin(num1)) << " degrees";
            break;
        case 12:
            cout << "acos(" << num1 << ") = " << rad2deg(acos(num1)) << " degrees";
            break;
        case 13:
            cout << "atan(" << num1 << ") = " << rad2deg(atan(num1)) << " degrees";
            break;
        case 14:
            cout << num1 << " degrees = " << deg2rad(num1) << " radians";
            break;
        case 15:
            cout << num1 << " radians = " << rad2deg(num1) << " degrees";
            break;
    }

    return 0;
}

