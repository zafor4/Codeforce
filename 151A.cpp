#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toasts_from_drink = (k * l) / nl;
    int toasts_from_lime = (c * d) / 1;
    int toasts_from_salt = p / np;

    int min_toasts = min({toasts_from_drink, toasts_from_lime, toasts_from_salt});

    int toasts_per_friend = min_toasts / n;

    cout << toasts_per_friend << endl;

    return 0;
}
