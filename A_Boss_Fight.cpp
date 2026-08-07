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
     if (n == 1) {
        int val;
        cin >> val;
        cout << val;
        return;
    }
    vector<int>arr(n);
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        mp[arr[i]]++;
    }
    
    int mx=0,mxf=0;
    for(auto it:mp)
    {
        if(it.second>mxf){
            mxf = it.second;
            mx = it.first;
        }
    }
    if(mxf>(n-mxf))
    {
        int ex = mxf - (n - mxf) -2;
        ex = ex*mx;
        sum-=ex;
    }
    cout << sum;
    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}