#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int test;
    cin >> test;
    for(int t=0;t<test;t++) {
        int n;
        cin >>n;
        int flag=0;
        vector<int> per(n);
        for(int i=0;i<n;i++) {
            cin >> per[i];
        }
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[per[i]] = i;
        }
        for(int i=0;i<n-1;i++)
        {
            if(mp[arr[i]]>mp[arr[i+1]])
            {
                cout << "NO" << endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}