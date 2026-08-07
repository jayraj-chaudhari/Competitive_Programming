#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int e=2,o=1;
    for(int i=0;i<n;i++){
        if(i%2){
           cout <<( e + ((n%2)?n-1:n))<< " ";
            e+=2;
        }
        else{
            cout << o << " ";
            o+=2;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}