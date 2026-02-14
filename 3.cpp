#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=0;t<test;t++) {
        int flag=0;
        int n;
        cin >> n;
        string a;
        cin >> a;
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='.'){
                cnt++;
                ans++;
            }
            else if(a[i]=='#')
            {
                cnt=0;
            }
            if(cnt==3){
                flag=1;
                cout << 2 << endl;
                break;
            }
        }
        if(flag==0) cout << ans << endl;
        
    }
}