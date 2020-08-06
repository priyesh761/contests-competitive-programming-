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

        string s;
        cin>>s;

        reverse(s.begin(),s.end());
        int cntz=0;
        int cnt1=0;
        stack<int> lz,l1;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            {
                if(cnt1>0){
                    cnt1--;
                    v.PB(v[l1.top()]);
                    l1.pop();
                }
                else
                    v.PB(cnt1+cntz);

                lz.push(i);
                cntz++;
            }
            else{
                if(cntz>0){
                    cntz--;
                    v.PB(v[lz.top()]);
                    lz.pop();
                }
                else
                    v.PB(cnt1+cntz);
                
                l1.push(i);
                cnt1++;
            }
        }

        cout<<cntz+cnt1<<'\n';
        reverse(v.begin(),v.end());
        for(auto i:v){
            cout<<i+1<<' ';
        }
        cout<<'\n';
    }
}