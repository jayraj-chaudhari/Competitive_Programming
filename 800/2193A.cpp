#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s;
        cin >> s;
        int x;
        cin >> x;
        int temp;
        int sum = 0;
        for(int i=0;i<n;i++)        {
            cin >> temp;
            sum += temp;
        }
        if(s >= sum && (s-sum)%x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}