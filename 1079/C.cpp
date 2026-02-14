#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int t=0;t<test;t++) {
        long long p,q;
        cin >> p >> q;
        if(p>=q){
            cout << "Alice" <<endl;
            continue;
        }
        else
        {
            if(p >= 1ll*2*(q-p) && q >= 1ll*3*(q-p)){
                cout << "Bob" <<endl;
                continue;
            }
            else{
                cout << "Alice" <<endl;
            }
        }
    }
    return 0;
}
