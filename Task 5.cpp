#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
    public:
    string name;
    int age;
    double salary;
};

int main() {
    // Create an Employee structure to store employee details
    Employee emp;

    // Open the file named "EmpData" for writing
    ofstream outFile("EmpData.txt", ios::app);

    if (!outFile) {
        cerr << "Error: Unable to open file for writing." << std::endl;
        return 1;
    }

    // Prompt the user to enter employee details
    cout << "Enter employee details:\n";
    cout << "Name: ";
    getline(cin >> ws, emp.name); // Read the name with spaces
    cout << "Age: ";
    cin >> emp.age;
    cout << "Salary: ";
    cin >> emp.salary;

    // Write employee details to the file
    outFile << "Name: " << emp.name << ", Age: " << emp.age << ", Salary: " << emp.salary <<endl;
    cout<< "Name: " << emp.name << ", Age: " << emp.age << ", Salary: " << emp.salary <<endl;
    // Close the file
    outFile.close();

    cout << "Employee details successfully written to EmpData.txt." <<endl;

    return 0;
}
