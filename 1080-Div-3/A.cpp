#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool has67 = false;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x == 67) has67 = true;
        }

        cout << (has67 ? "YES" : "NO") << "\n";
    }
}

