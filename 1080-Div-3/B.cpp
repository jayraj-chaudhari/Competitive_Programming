#include <bits/stdc++.h>
using namespace std;
int chainend(int ele){
    while(ele%2==0) ele/=2;
    return ele;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int _ = 0; _ < t; _++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
           if(chainend(arr[i])!=chainend(i+1)){
                cout<<"NO\n";
                goto end;
           }
        }
        cout<<"YES\n";
        end:;
    }
}