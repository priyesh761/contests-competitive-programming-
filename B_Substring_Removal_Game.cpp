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

        vector<int> v;
        bool st=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                    if(st==1)
                    (*v.rbegin())++;
                    else
                    {
                        v.PB(1);
                        st=1;
                    }
            }
            else{
                st=0;
            }
        }

        sort(v.begin(),v.end(),greater<int>());
        //cout<<v.size();
        ll sum=0;
        for(int i=0;i<v.size();i+=2){
            sum+=v[i];
           // cout<<v[i]<<' ';
        }

        cout<<sum<<'\n';
    }
}