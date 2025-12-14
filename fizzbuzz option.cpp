#include <iostream>
using namespace std;

void helloWorld() {
    cout << "=== Hello World ===" << endl;
    cout << "Hello, World!" << endl << endl;
}

void sumTwoNumbers() {
    int a, b;
    cout << "=== Sum of Two Numbers ===" << endl;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << (a + b) << endl << endl;
}

void fizzBuzz() {
    cout << "=== FizzBuzz (1 to 20) ===" << endl;
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << i << endl;
    }
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Hello World" << endl;
        cout << "2. Sum of Two Numbers" << endl;
        cout << "3. FizzBuzz (1–20)" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: helloWorld(); break;
            case 2: sumTwoNumbers(); break;
            case 3: fizzBuzz(); break;
            case 0: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 0);

    return 0;
}