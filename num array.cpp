#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int n[MAX_SIZE];
    int i = 0;
    char ch = 'y';

    while (ch != 'n' && i < MAX_SIZE) {
        cout << "Enter an integer: ";
        cin >> n[i];
        i++;
        
        if (i < MAX_SIZE) {
            cout << "Wanna continue? (y/n): ";
            cin >> ch;
        }
    }
    
    cout << "Elements in the array: ";
    for (int j = 0; j < i; j++) {
        cout << n[j] << "\t";
    }

    return 0;
}

