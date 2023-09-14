#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int sergey_points = 0;
    int dima_points = 0;

    int left = 0;
    int right = n - 1;
    bool sergey_turn = true;

    while (left <= right) {
        if (sergey_turn) {
            if (cards[left] > cards[right]) {
                sergey_points += cards[left];
                left++;
            } else {
                sergey_points += cards[right];
                right--;
            }
        } else {
            if (cards[left] > cards[right]) {
                dima_points += cards[left];
                left++;
            } else {
                dima_points += cards[right];
                right--;
            }
        }

        sergey_turn = !sergey_turn;
    }

    cout << sergey_points << " " << dima_points << endl;

    return 0;
}
