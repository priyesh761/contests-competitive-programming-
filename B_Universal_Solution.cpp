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
        string s;
        cin>>s;

        int ar[3]={0};
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                ar[0]++;
            else if(s[i]=='P')
                    ar[1]++;
                 else if(s[i]=='S')
                        ar[2]++;
        }
        char c;
        if(ar[0]>=ar[1]&&ar[0]>=ar[2])
            c='P';
        else if(ar[1]>=ar[0]&&ar[1]>=ar[2])
                c='S';
            else
                c='R';
            
        for(int i=0;i<s.length();i++)
        cout<<c;

        cout<<'\n';
    }
}