
using namespace std;

int main() {
    vector<int> arr = {2, 4, 5, 7, 1};
    int n = arr.size();

   
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    for range sum [l, r] (r is exclusive)
    auto range_sum = [&](int l, int r) {
        return prefix[r] - prefix[l];
    };

 
    cout << range_sum(0, 3) << "\n"; // sum of arr[0..2] = 11
    cout << range_sum(2, 5) << "\n"; // sum of arr[2..4] = 13

    return 0;
}