#include <iostream>
using namespace std;

int main() {
    
    cout << "=== Hello World ===" << endl;
    cout << "Hello, World!" << endl << endl;

    
    int a, b;
    cout << "=== Sum of Two Numbers ===" << endl;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << (a + b) << endl << endl;

   
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

    return 0;
}