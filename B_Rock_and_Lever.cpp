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

class trie
{

public:
    trie *z{nullptr};
    trie *o{nullptr};
    int cnt{0};

    void insert(int n)
    {
        trie *curr = this;
        for (int i = 31; i >= 0; i--)
        {
            bool bit = (n & (1 << i));
            curr->cnt++;
            if (bit)
            {
                if (curr->o == nullptr)
                    curr->o = new trie();
                curr = curr->o;
            }
            else
            {
                if (curr->z == nullptr)
                    curr->z = new trie();
                curr = curr->z;
            }
        }
        curr->cnt++;
    }

    int get(int n)
    {
        trie *curr = this;
        for (int i = 31; i >= 0; i--)
        {
            bool bit = (n & (1 << i));
            curr->cnt++;
            if (bit)
            {
                curr = curr->o;
                curr->cnt--;
                return curr->cnt;
            }
            else
            {
                curr = curr->z;
            }
        }
        return 0;
    }
};
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        trie t;

        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            t.insert(ar[i]);
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += t.get(ar[i]);
        cout << sum << '\n';
    }
}