#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    init;
    int t;
    cin >> t;

    while(t--)
    {
        ll n,x;
        cin>>n>>x;

        ll ar[n];
        for (ll i = 0; i < n; i++)
            cin>>ar[i];

        sort(ar,ar+n, greater<ll>());
        ll num=0,cnt=0,i=0;

        while(i<n)
        {
            cnt=1;
            while(i<n && cnt*ar[i]<x)
            {
                i++;
                cnt++;
            }
            if(i<n&&cnt*ar[i]>=x)
                num++;
            i++;
        }
        
        cout<<num<<'\n';
    }
}