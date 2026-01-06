#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "C++ Console Application" << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Show Info" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello, welcome to the console app!" << endl;
            break;
        case 2:
            cout << "This is a basic C++ console application." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
