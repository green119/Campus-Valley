#include <iostream>
#include <stdexcept> // for std::invalid_argument
using namespace std;

int main() {
    try {
        double dividend, divisor, result;

        // Prompt the user to enter dividend
        cout << "Enter dividend: ";
        cin >> dividend;

        // Prompt the user to enter divisor
        cout << "Enter divisor: ";
        cin >> divisor;

        // Check if divisor is zero
        if (divisor == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }

        // Perform division
        result = dividend / divisor;
        cout << "Result of division: " << result <<endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() <<endl;
    }

    return 0;
}
