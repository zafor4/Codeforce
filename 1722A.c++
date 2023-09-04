#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        bool valid = true;
 
        if (s[0] != 'T') {
            valid = false;
        } else {
            for (int i = 1; i < n; i++) {
                if (s[i] == 'T') {
                    valid = false;
                    break;
                }
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
   
