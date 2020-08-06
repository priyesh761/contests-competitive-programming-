// Facebook hackercup qualification round
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
     //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    for (int tq = 1; tq <= t; tq++)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> c(n);
        vector<ll> d(n,-1);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        
        deque<pair<ll, ll>> dq;
        d[0]=0;
        dq.push_back({0,0});
        
        for (int i = 1; i < n; i++) {
          
            while (!dq.empty()&&dq.begin()->second < i - m)
                dq.pop_front();
            
            if(!dq.empty()){
            pi tmp=dq.front();
            if(c[tmp.second]!=0||tmp.second==0)
            d[i]=c[i]+d[tmp.second];
            }
            
            if(d[i]!=-1&&c[i]!=0){
                while(!dq.empty()&&dq.back().first>=d[i])
                    dq.pop_back();
                dq.push_back({d[i],i});
            }
        }

        ll mi=LONG_MAX;

        for(int i=n-m-1;i<n;i++)
            if(d[i]!=-1&&(c[i]!=0||i==0))
                mi=min(mi,d[i]);

        cout << "Case #" << tq << ": ";
        if (mi==LONG_MAX)
            cout << -1 << '\n';
        else
            cout << mi << '\n';


    }
}