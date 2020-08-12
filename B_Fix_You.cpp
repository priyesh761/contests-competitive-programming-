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

        vector<string> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];

        int cnt=0;
        for(int i=0;i<n-1;i++)
        if(v[i][m-1]=='R')
        cnt++;

        for(int i=0;i<m-1;i++)
        if(v[n-1][i]=='D')
        cnt++;

        cout<<cnt<<'\n';
    }
}