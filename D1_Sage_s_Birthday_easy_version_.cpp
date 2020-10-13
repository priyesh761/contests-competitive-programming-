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
    int n;

    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + n);
    int i = 0, j = n/2;
    vector<int> v;
    while (i <n/2&&j<n)
    {
        v.push_back(ar[j]);
        v.push_back(ar[i]);
        
        i++;
        j++;
    }
    while(i<n/2){
    v.push_back(ar[i]);
        i++;
    }
    while(j<n){
    v.push_back(ar[j]);
        j++;
    }

    int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        if(v[i]<v[i-1]&&v[i]<v[i+1])
            cnt++;
    }
    cout<<cnt<<'\n';

    for(auto i:v)
    cout<<i<<' ';
}