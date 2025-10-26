#include <iostream>
using namespace std;

int main() {
    string groups[] = {"Solar Team", "WindTech", "HydroCrew"};
    int scores[3][3] = {{85, 88, 90}, {70, 72, 75}, {90, 93, 91}};
    int bonus[] = {5, 10, 0};

    for (int i = 0; i < 3; i++) {
        int sum = scores[i][0] + scores[i][1] + scores[i][2];
        float average = sum / 3.0;
        float finalRating = average + bonus[i];
        cout << groups[i] << " Final Rating: " << finalRating << endl;
    }

    return 0;
}