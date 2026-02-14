#include<bits/stdc++.h>
using namespace std;
int d(int y)
{
    int sum=0;
    while(y>0)
    {
        sum+=y%10;
        y/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin >> x;
        int y;
        int cnt=0;
        for(y=x;y<x+100;y++)
        {
            if(y-d(y)==x){
                cnt++;
            }
        }
        cout << cnt <<endl;
    }
}