#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<ll> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    init;
 
    ll n;
    cin>>n;

    ll a[n];
    ll b[n];
    vi in(n);
    vector<vi> G(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];

    for(ll i=0;i<n;i++){
        cin>>b[i];
        if(b[i]!=-1){
        in[b[i]-1]++;
        G[i].PB(b[i]-1);
        }
    }

    vector<ll> res;
    stack<ll> st;
    queue<ll> qu;

    for(ll i=0;i<n;i++)
        if(in[i]==0)
            qu.push(i);

    vector<ll> sum(n);

    while(qu.empty()==0){
        ll curr=qu.front();
        qu.pop();
        
        
        if(a[curr]+sum[curr]<0){
        st.push(curr);
        }
        else
        res.PB(curr);
        for(ll i=0;i<G[curr].size();i++){
            in[G[curr][i]]--;
            if(a[curr]+sum[curr]>0)
                sum[G[curr][i]]+=a[curr]+sum[curr];
        
            if(in[G[curr][i]]==0)
            qu.push(G[curr][i]);
        }
    }
    
    ll mx=0;

    while(st.empty()==0){
        res.PB(st.top());
        st.pop();
    }
    
    for(auto i:res){
        mx+=a[i];
        a[b[i]-1]+=a[i];
    }
       
    cout<<mx<<'\n';


    for(auto i:res){
        cout<<i+1<<' ';
    }
    cout<<'\n';
    
}