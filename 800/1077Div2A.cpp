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
        int a[n];
        int back=n;
        for(int i=n-1;i>=0;i-=2)
        {
            a[i]=back;
            back--;
        }

        back = 1;
        for(int i=n-2;i>=0;i-=2)
        {
            a[i]=back;
            back++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}