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

        vector<int> v(10);

        for(int i=0;i<s.length();i++)
        v[s[i]-'0']++;


        vi pp;

        for(int i=0;i<10;i++)
        if(v[i]>0)
        pp.PB(i);
    //cout<<pp.size();
        int mx= max(2,*max_element(v.begin(),v.end()));
        for(int i=0;i<pp.size();i++)
        for(int j=i+1;j<pp.size();j++)
        {
            bool sel=0;
            int sz=0,sz1=0;
            for(int k=0;k<s.length();k++)
            {
                if(sel){
                    if(s[k]=='0'+pp[i]){
                    sz++;
                    sel=!sel;
                    }
                }
                else{
                    if(s[k]=='0'+pp[j]){
                    sz++;
                    sel=!sel;
                    }
                }
            }
            sel=0;

            for(int k=0;k<s.length();k++)
            {
                if(sel){
                    if(s[k]=='0'+pp[j]){
                    sz1++;
                    sel=!sel;
                    }
                }
                else{
                    if(s[k]=='0'+pp[i]){
                    sz1++;
                    sel=!sel;
                    }
                }
            }
            if(sz1%2==1)
            sz1--;
            if(sz%2==1)
            sz--;
            mx=max({mx,sz,sz1});
        }
        cout<<s.length()-mx<<'\n';
    }
}