#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << n << " "; 

        
        for (int i = 1; i < n; i++) {
            cout << i << " ";
        }

        cout << endl; 
    }

    return 0;
}
