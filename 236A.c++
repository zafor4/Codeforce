#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> distinctChars;

    for (char c : s) {
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }

    string result(distinctChars.begin(), distinctChars.end());
    
    if (result.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
