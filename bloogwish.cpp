#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) cin >> words[i];

    vector<pair<int,int>> result;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            bool diff = true;
             for (int k = 0; k < 5; k++) {
                if (words[i][k] == words[j][k]) {
                    diff = false;
                    break;
                }
            }
            if (diff) result.push_back({i+1, j+1}); 
            
        }
    }

    cout << result.size() << "\n";
         for (auto &p : result) cout << p.first << " " << p.second << "\n";
}