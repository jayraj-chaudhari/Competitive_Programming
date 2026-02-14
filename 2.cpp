#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=0;t<test;t++) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        int mini = a[0];
        for(int i=1;i<n;i++)
        {
            mini = max(mini, a[i]-a[i-1]);
        }
        mini = max(mini,2*(k-a[n-1]));
        cout << mini << endl;  
    }
}