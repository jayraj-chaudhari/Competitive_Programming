#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=0;t<test;t++) {
        int n,w;
        cin >> n >> w;
        if(w==1)
        {
            cout << "0" << endl;
        }
        else {
            int present = n/w;
            int rem = n - present;
            cout << rem << endl;
        }
    }
}