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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = 0;
    for (int i =1; i < n; i++) {
        if(a[i] < a[i-1]) {
            k= max(k, a[i-1] - a[i]);
        }
    }
    bool ans = true;
    int curr = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i]>=curr) {
            curr = a[i];
        }
        else if(a[i] +k >=curr){
            curr = a[i] + k;
        }
        else{
            ans = false;
            break;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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