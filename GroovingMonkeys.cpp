//TCS mockvita 2  - 2020

#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
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
        ll n;
        cin>>n;

        ll ar[n+1],vis[n+1];
        MS(vis,0);

        for(ll i=1;i<=n;i++)
        cin>>ar[i];
    
        ll ans=1;
        for(ll i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                ll cnt=0;
                ll ind=i;
                while(vis[ind]==0){
                    vis[ind]=1;
                    ind=ar[ind];
                    cnt++;
                }
                ans=(ans*cnt)/__gcd(ans,cnt);
            }
        }
        cout<<ans<<'\n';
    }

    
}