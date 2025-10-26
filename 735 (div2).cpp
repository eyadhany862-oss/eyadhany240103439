#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long maxProduct = 0;

        for (int i = 0; i < n - 1; i++) {
            long long product = arr[i] * arr[i + 1];
            if (product > maxProduct) {
                maxProduct = product;
            }
        }

        cout << maxProduct << endl;
    }

    return 0;
}
