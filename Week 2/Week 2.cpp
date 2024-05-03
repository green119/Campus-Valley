#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& filename) {
    ifstream file(filename);
    string word;
    int count = 0;
    if (!file.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return -1;
    }

    while (file >> word) {
        count++;
    }

    file.close();
    return count;
}

int main() {
    string filename;

    // Prompt the user to enter the file name
    cout << "Enter the file name: ";
    cin >> filename;

    // Call the function to count words
    int wordCount = countWords(filename);

    if (wordCount >= 0) {
        cout << "Total number of words in the file: " << wordCount << endl;
    }

    return 0;
}
