#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<ll> vi;
typedef pair<ll, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair
bool st=1;
void dfs(vector<vi>& G, vi& g, vi& p, vi& h,int curr,int par){

    if(st==0)
        return;
    ll good=0;
    ll bad=0;
    for(ll i=0;i<G[curr].size();i++)
        if(G[curr][i]!=par)
            dfs(G,g,p,h,G[curr][i],curr);
    //cout<<curr+1<<' '<<g[curr]<<' '<<b[curr]<<' '<<h[curr]<<' '<<p[curr]<<endl;
    
    ll req=(h[curr]+p[curr])/2;
    if((h[curr]+p[curr])%2||req>p[curr]||g[curr]>req)
    {
        st=0;
        return;
    }
    if(par!=-1){
        p[par]+=p[curr];
        g[par]+=(p[curr]+h[curr])/2;
    }

}
int main()
{
    init;
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m;

        cin>>n>>m;

        vi p(n);

        for(ll i=0;i<n;i++)
        cin>>p[i];

        vi h(n);
        for(ll i=0;i<n;i++)
        cin>>h[i];

        vector<vi> G(n);

        for(ll i=0;i<n-1;i++)
        {
            ll x,y;
            cin>>x>>y;
            x--;
            y--;
            G[x].PB(y);
            G[y].PB(x);
        } 

        vector<ll> g(n);
        st=1;
        dfs(G,g,p,h,0,-1);

        if(st)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}