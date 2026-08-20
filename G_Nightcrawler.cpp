#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<climits>
#include<cstring>
#include<iomanip>
#include<cassert>
#include<chrono>
#include<random>
#include<functional>

using namespace std;

#define ll long long
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()

/*
First ideas
 
 
 
Brute force
 
 
 
Optimizations
 
 
 
*/
 
 
 
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<int> p(n + 1);
    for(int i = 2; i <= n; i++) cin >> p[i];

    vector<priority_queue<ll, vector<ll>, greater<ll>>> pq(n + 1);
    vector<ll> av;
 
    for(int i = n; i >= 1; i--) {
        if(pq[i].empty()) pq[i].push(a[i]);
        else {
            ll x = pq[i].top();
            pq[i].pop();
            pq[i].push(max(x, a[i]));
            av.push_back(min(x, a[i]));
        }
 
        if(i > 1) {
            int par = p[i];
            if(pq[par].size() < pq[i].size()) swap(pq[par], pq[i]);
 
            while(!pq[i].empty()) {
                pq[par].push(pq[i].top());
                pq[i].pop();
            }
        }
    }
 
    int l = pq[1].size();
    ll sum = 0;
    
    while(!pq[1].empty()) {
        sum += pq[1].top();
        pq[1].pop();
    }
 
    vector<ll> ans(n + 1, -1);
    ans[l] = sum;
 
    sort(av.rbegin(), av.rend());
    for(int i = 0; i < av.size(); i++) {
        sum += av[i];
        ans[l + i + 1] = sum;
    }
 
    for(int k = 1; k <= n; k++) cout << ans[k] << " \n"[k == n];
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}