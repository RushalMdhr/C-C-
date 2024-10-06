#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// Function prototypes
void login();
void chooseBooks(const char* username);
void saveBooksToFile(const char* username, const vector<const char*>& books);
void viewBooks(const char* username);
void adminMenu();
void returnBook();

int main() {
    login();
    return 0;
}

void login() {
    char username[50];
    cout << "Enter your username: ";
    cin >> username;
    cout << "Welcome, " << username << "!\n";

    chooseBooks(username);

    char choice;
    do {
        cout << "\nDo you want to:\n";
        cout << "1. View your books\n";
        cout << "2. Logout\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                viewBooks(username);
                break;
            case '2':
                cout << "Logged out.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '2');
}

void chooseBooks(const char* username) {
    vector<const char*> books;
    char addMore;

    do {
        char bookName[100];
        cout << "Enter the name of the book you want to add: ";
        cin >> bookName;
        books.push_back(bookName);

        cout << "Do you want to add more books? (y/n): ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    saveBooksToFile(username, books);
}

void saveBooksToFile(const char* username, const vector<const char*>& books) {
    ofstream file("book.txt", ios::app);
    if (file.is_open()) {
        file << username << ": ";
        for (const auto& book : books) {
            file << book << ", ";
        }
        file << endl;
        file.close();
    } else {
        cout << "Unable to open file.\n";
    }
}

void viewBooks(const char* username) {
    ifstream file("book.txt");
    if (file.is_open()) {
        char line[256];
        while (file.getline(line, sizeof(line))) {
            if (strstr(line, username) == line) {
                cout << "Books taken by " << username << ": ";
                cout << strstr(line, ": ") + 2 << endl;
                break;
            }
        }
        file.close();
    } else {
        cout << "Unable to open file.\n";
    }
}

void adminMenu() {
    cout << "Admin Menu\n";
    cout << "1. Return a book\n";
    cout << "2. Back to main menu\n";
}

void returnBook() {
    char username[50], book[100];
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter book to be returned: ";
    cin >> book;

    ifstream file("book.txt");
    ofstream temp("temp.txt");

    if (file.is_open() && temp.is_open()) {
        char line[256];
        while (file.getline(line, sizeof(line))) {
            if (strstr(line, username) == line) {
                vector<const char*> books;
                const char* token = strtok(line, ": ");
                while ((token = strtok(nullptr, ", ")) != nullptr) {
                    books.push_back(token);
                }
                auto it = find(books.begin(), books.end(), book);
                if (it != books.end()) {
                    books.erase(it);
                    cout << "Book returned successfully.\n";
                } else {
                    cout << "Book not found.\n";
                }
                temp << username << ": ";
                for (const auto& b : books) {
                    temp << b << ", ";
                }
                temp << endl;
            } else {
                temp << line << endl;
            }
        }
        file.close();
        temp.close();
        remove("book.txt");
        rename("temp.txt", "book.txt");
    } else {
        cout << "Unable to open files.\n";
    }
}
