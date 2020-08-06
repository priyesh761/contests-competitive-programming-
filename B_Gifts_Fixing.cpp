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
        int n;
        cin>>n;
        int c[n],o[n];

        for(int i=0;i<n;i++)
        cin>>c[i];
        for(int i=0;i<n;i++)
        cin>>o[i];

        int mx1=*min_element(c,c+n);
        int mx2=*min_element(o,o+n);

        ll op=0;
        for(int i=0;i<n;i++){
            int aa=c[i]-mx1;
            int ab=o[i]-mx2;
            op+=max(aa,ab);
        }

        cout<<op<<'\n';
    }
}