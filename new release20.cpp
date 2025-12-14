#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1, 2, 3, 4, 5, 6};

  
    for (int x : nums | views::filter([](int n){ return n % 2 == 0; })) {
        cout << x << " ";
    }
    cout << "\n";

   
    struct Point { int x; int y; };
    Point p{.x = 10, .y = 20};
    cout << "Point: (" << p.x << ", " << p.y << ")\n";

    return 0;
}