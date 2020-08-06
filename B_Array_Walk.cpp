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
        int n,k,z;
        cin>>n>>k>>z;

        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        vector<ll> prf(n+1);
        
        for(int i=1;i<=n;i++)
        prf[i]=ar[i-1]+prf[i-1];

        ll mx=prf[k+1];
        for(int i=2;i<=k+1;i++){
           ll re=prf[i];
           int N=k;
           int Z=z;
           N-=(i-1);
           
           int tmp=min(z,N/2);
           re+=(ar[i-1]+ar[i-2])*tmp;
           N-=tmp*2;
           Z-=tmp;
           if(Z>0&&N>0){
               N--;
               Z--;
               re+=ar[i-2];
               if(N>0)
               re+=ar[i-1],N--;
               
           }
           re+=prf[i+N]-prf[i];
            
           // cout<<re<<' '<<tmp<<endl;;
            if(mx<re){
                mx= re;
            }
        }
        cout<<mx<<'\n';
    }
}