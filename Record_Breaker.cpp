// google kickstart 2020 round D
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

    for(int z=1;z<=t;z++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];

        int cnt=0;
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>maxi)
            {
                maxi=ar[i];

                if(i+1==n||ar[i+1]<ar[i])
                {
                    cnt++;
                }
            }
        }

        cout<<"Case #"<<z<<": "<<cnt<<'\n';
    }
}