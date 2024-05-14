#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class Student {
public:
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    string name;
    double grade;
    char choice;

    do {
        Student student;
        cout << "Enter student name: ";
        cin >> student.name;

        cout << "Enter grade for " << student.name << ": ";
        cin >> student.grade;

        students.push_back(student);

        cout << "Do you want to enter another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    if (students.empty()) {
        cout << "No students entered." << endl;
        return 0;
    }

    double sum = 0;
    double highest = numeric_limits<double>::lowest();
    double lowest = numeric_limits<double>::max();

    for (const auto& student : students) {
        sum += student.grade;
        if (student.grade > highest) {
            highest = student.grade;
        }
        if (student.grade < lowest) {
            lowest = student.grade;
        }
    }

    double average = sum / students.size();

    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    return 0;
}
