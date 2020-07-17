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
        int ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        
        sort(ar,ar+3,greater<int>());
        
        if(ar[0]!=ar[1])
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<ar[0]<<' '<<ar[2]<<' '<<ar[2]<<'\n';
        }

    }
}