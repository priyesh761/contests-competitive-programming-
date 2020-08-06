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

        vi ar(110);


        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            ar[x]++;
        }

        int mx=0;
        for(int i=1;i<=104;i++){
            int cnt=0;
            for(int j=1;j<=i/2;j++){
                if(ar[j]>0){
                    if(j==i-j)
                        cnt+=ar[j]/2;
                    else
                        cnt+=min(ar[j],ar[i-j]);
                }
            }
            mx=max(mx,cnt);
        }
        cout<<mx<<'\n';
    }
}