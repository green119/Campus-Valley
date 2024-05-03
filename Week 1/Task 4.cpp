#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to check if a number is palindrome
bool isPalindrome(int n) {
    int reversedNum = 0, originalNum = n;
    while (n > 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    return originalNum == reversedNum;
}

// Function to check if a number is Armstrong
bool isArmstrong(int n) {
    int sum = 0;
    int originalNum = n;
    int numDigits = (int)log10(n) + 1;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == originalNum;
}

int main() {
    int choice, num;

    while (true) {
        cout << "\nPress 1 to calculate the factorial of a number\n";
        cout << "Press 2 to check whether the given number is prime or not\n";
        cout << "Press 3 to check palindrome or not\n";
        cout << "Press 4 to check Armstrong or not\n";
        cout << "Press 5 to exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number to calculate its factorial: ";
                cin >> num;
                if (num < 0)
                    cout << "Factorial is not defined for negative numbers.\n";
                else
                    cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
                break;
            case 2:
                cout << "Enter a number to check if it is prime: ";
                cin >> num;
                if (isPrime(num))
                    cout << num << " is prime.\n";
                else
                    cout << num << " is not prime.\n";
                break;
            case 3:
                cout << "Enter a number to check if it is palindrome: ";
                cin >> num;
                if (isPalindrome(num))
                    cout << num << " is palindrome.\n";
                else
                    cout << num << " is not palindrome.\n";
                break;
            case 4:
                cout << "Enter a number to check if it is Armstrong: ";
                cin >> num;
                if (isArmstrong(num))
                    cout << num << " is Armstrong.\n";
                else
                    cout << num << " is not Armstrong.\n";
                break;
            case 5:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid choice.\n";
        }
    }

    return 0;
}
