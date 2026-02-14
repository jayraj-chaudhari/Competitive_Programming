#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }        
        int l = 0;
        while(l < n && arr[l] == n-l) l++;       
        if(l == n) {
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            continue;
        }       
        int r = l;
        for(int j = l; j < n; j++) {
            if(arr[j] != j + 1) {
                r = j;
            }
        }      
        reverse(arr.begin() + l, arr.begin() + r + 1);
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
