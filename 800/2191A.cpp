#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        int flag=0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if((arr[i]%2 ==1 && arr[i+1]%2==1) || (arr[i]%2 ==0 && arr[i+1]%2==0))
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
        } 
        if(flag==0)
        {
            cout<<"YES\n";
        }
    }
}