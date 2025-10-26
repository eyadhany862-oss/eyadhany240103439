#include <iostream>
#include <string>
using namespace std;

int main() {
    string myCard;
    cin >> myCard; 

    bool canPlay = false;

    for (int i = 0; i < 5; i++) {
        string card;
        cin >> card;

        if (card[0] == myCard[0] || card[1] == myCard[1]) {
            canPlay = true;
        }
    }

    if (canPlay)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
