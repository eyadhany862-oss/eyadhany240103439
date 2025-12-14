#include <bits/stdc++.h>
using namespace std;


void printInt128(__int128 x) {
    if (x == 0) {
        cout << 0;
        return;
    }
    string s;
    bool neg = false;
    if (x < 0) {
        neg = true;
        x = -x;
    }
    while (x > 0) {
        s.push_back('0' + x % 10);
        x /= 10;
    }
    if (neg) cout << '-';
    reverse(s.begin(), s.end());
    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;
// there is no cout so we print like this
    __int128 big = (__int128)a * b; 
    
    cout << "Result of a*b = ";
    printInt128(big);
    cout << "\n";

   
    __int128 fact = 1;
    for (int i = 1; i <= 30; i++) fact *= i;
    cout << "30! = ";
    printInt128(fact);
    cout << "\n";

    return 0;
}