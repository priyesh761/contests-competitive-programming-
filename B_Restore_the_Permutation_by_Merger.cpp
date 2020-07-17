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

        int ar[2*n];
        set<int> st;

        for(int i=0;i<2*n;i++)
        cin>>ar[i];

        for(int i=0;i<2*n;i++)
            if(st.count(ar[i])==0){
                cout<<ar[i]<<' ';
                st.insert(ar[i]);
            }

        cout<<'\n';
    }
}