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
        int n,m;
        cin>>n>>m;

        int a[n],b[m];

        set<int> st;
        for(int i=0;i<n;i++)
        cin>>a[i],st.insert(a[i]);

        bool status=0;
        int ans=-1;
        for(int i=0;i<m;i++){
        cin>>b[i];
        if(st.count(b[i])){
            status=1;
            ans=b[i];
        }
        }


        if(status)
        {
            cout<<"YES\n";
            cout<<"1 "<<ans<<'\n';
        }
        else 
        cout<<"NO\n";
    }
}