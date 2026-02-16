#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), pos(n+1);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        int want = n; // largest value we try to bring forward

        for (int i = 0; i < n && want > 0; i++) {
            while (want > p[i] && pos[want] < i) {
                want--; // this large value is already to the left, skip it
            }
            if (want > p[i] && pos[want] > i) {
                reverse(p.begin() + i, p.begin() + pos[want] + 1);
                break;
            }
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
