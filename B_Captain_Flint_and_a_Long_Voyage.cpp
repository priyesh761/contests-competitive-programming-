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

        int xx=n/4;
        int yy=n%4;


        string s;

        if(n==1)
        s="8";
        else{
            for(int i=0;i<n-(xx+(yy!=0));i++)
                s+='9';

            while(xx+(yy!=0)>0){
                s+='8';
                xx--;
            }
        }
        cout<<s<<'\n';
    }
}