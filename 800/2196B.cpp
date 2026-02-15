#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]*arr[j] == j-i){
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}