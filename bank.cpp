#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> contrib(n);
        long long total = 0;
        for (int i = 0; i < n; i++) {
            contrib[i] = (a[i] / x) * y;
            total += contrib[i];
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long candidate = a[i] + (total - contrib[i]);
            ans = max(ans, candidate);
        }

        cout << ans << "\n";
    }
    return 0;
}