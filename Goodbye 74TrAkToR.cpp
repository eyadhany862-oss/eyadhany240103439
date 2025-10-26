#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string s;
        cin >> s;

        int left = -1, right = -1;

        // find first and last 'B'
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == 'B') {
                if (left == -1) left = i;
                right = i;
            }
        }

        // if there are no 'B's, nothing to paint
        if (left == -1) {
            cout << 0 << endl;
        } else {
            cout << right - left + 1 << endl;
        }
    }

    return 0;
}
