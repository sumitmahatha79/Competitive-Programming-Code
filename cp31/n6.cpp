#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;

        int k = 0;

        while (k < min(s.size(), t.size()) && s[k] == t[k]) {
            k++;
        }

        int ans = s.size() + t.size();

        if (k > 0) {
            ans = ans - k + 1;
        }

        cout << ans << endl;
    }

    return 0;
}