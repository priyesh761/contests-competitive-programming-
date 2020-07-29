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

ll fact[21];
void compFact()
{
    fact[0]=1;
    for(int i=1;i<21;i++)
    fact[i]=fact[i-1]*i;

}

ll comb(ll a,ll b)
{
    if(b>a)
    swap(a,b);
    ll ans=fact[a];
    return ans/(fact[b]*fact[a-b]);
}

int main()
{
    init;
    compFact();
    int t;
    cin >> t;

    
    while(t--)
    {
        ll a,H,l1,l2,m,c;
        cin>>a>>H>>l1>>l2>>m>>c;
        ll i=0;
        bool st=1;
        ll ans=0;
        for( i=0;i<=m;i++)
            if(a*(m-i)+(a+c)*(i)>=H)
            {
                st=0;
                ans+=((pow(l1,i)*pow(l2-l1,m-i))*comb(m,i));
            }

        if(st)
            cout<<"RIP\n";
        else{
            ll num=pow(l2,m);
            ll fa=ans/__gcd(ans,num);
            ll na=num/__gcd(ans,num);
            cout<<fa<<'/'<<na<<'\n';
            
        }
    }
}