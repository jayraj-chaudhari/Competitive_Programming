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
        if(k>1){
            cout << "YES" << endl;
            continue;
        }
        else{
            bool flag=true;
            for(int i=1;i<n;i++) {
                if(a[i]<a[i-1]) {
                    flag=false;
                    break;
                }
            }
            if(flag) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

    }
}