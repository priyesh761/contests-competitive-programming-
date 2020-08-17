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
        int r,g,b,w;
        cin>>r>>g>>b>>w;

        bool rr,gg,bb,ww;
        rr=r%2;
        gg=g%2;
        bb=b%2;
        ww=w%2;
        int cnt=0;
        if(rr)
        cnt++;
        if(gg)
        cnt++;
        if(bb)
        cnt++;
        
        bool st=0;
        if((cnt==0)||(cnt==3)||(cnt==1&&ww==0)||(((cnt==2)&&(ww==1))&&r>0&&g>0&&b>0))
        st=1;


        if(st)
        cout<<"Yes\n";
        else
        {
            cout<<"No\n";
        }
        

    }
}