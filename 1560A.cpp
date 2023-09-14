#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        int x = 1;
        int count = 0;

        while (true) {
            if (x % 3 != 0 && x % 10 != 3) {
                count++;
            }
            if (count == k) {
                break;
            }
            x++;
        }
        cout << x << endl;
    }

    return 0;
}
