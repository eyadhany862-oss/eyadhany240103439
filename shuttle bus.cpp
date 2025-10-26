#include <iostream>
using namespace std;

int main() {
    string ids[] = {"S1", "S2", "S3", "S4"};
    int capacity[] = {40, 35, 50, 45};
    int passengers[] = {38, 22, 50, 32};
    string routes[] = {"East Gate Line", "Dormitory Line", "Main Campus", "North Gate Line"};

    for (int i = 0; i < 4; i++) {
        float load = (float)passengers[i] / capacity[i];
        cout << ids[i] << " (" << routes[i] << ") Load: " << load * 100 << "%";
        if (load > 0.9) cout << " [FLAGGED]";
        cout << endl;
    }

    return 0;
}