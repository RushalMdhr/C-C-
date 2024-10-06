#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    char name[30];
    int n;
    string check;

    // Input data
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll no: ";
    cin >> n;

    // Open file to append and read
    fstream fio("state.txt", ios::app | ios::in | ios::out);

    // Append data at the end of the file
    fio.seekp(0, ios::end);
    fio << name << endl << n << endl;

    // Move back to the start to read the content
    fio.seekg(0, ios::beg);

    // Vector to store each line of the file
    vector<string> lines;

    // Read the entire file line by line and store it in the vector
    while (getline(fio, check)) {
        lines.push_back(check);
    }

    // Close the file
    fio.close();

    // Output the lines in reverse order
    for (auto it = lines.rbegin();it != lines.rend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}

