#include <bits/stdc++.h>
using namespace std;

int main() {
    int low = 0, high = 100;
    while (low < high) {
        int mid = (low + high) / 2;
        if (mid * mid >= 30) {
            high = mid; 
        } else {
            low = mid + 1; 
        }
    }
    cout << "Smallest x with x^2 >= 30 is: " << low << "\n";
    return 0;
}