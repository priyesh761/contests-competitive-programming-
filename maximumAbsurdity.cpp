#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long get_sum(const vector<long long> &sum, int l, int r)
{
        return (l == 0) ? sum[r] : (sum[r] - sum[l - 1]);
}

int main()
{
        int n, k;
        scanf("%d %d", &n, &k);
        vector<long long> a(n), sum(n);
        cin >> a[0];

        sum[0] = a[0];
        for (int i = 1; i < n; ++i)
        {
                cin >> a[i];
                sum[i] = sum[i - 1] + a[i];
        }

        pair<int, int> ans = make_pair(n - 2 * k, n - k);

        long long ans_sum = get_sum(sum, n - 2 * k, n - k - 1) + get_sum(sum, n - k, n - 1);



        pair<int, long long> suff_max = make_pair(n - k, get_sum(sum, n - k, n - 1));
        for (int i = n - 2 * k - 1; i >= 0; --i)
        {
                long long cur = get_sum(sum, i + k, i + 2  * k - 1);
                if (cur >= suff_max.second)
                        suff_max = make_pair(i + k, cur);
                cur = get_sum(sum, i, i + k - 1) + suff_max.second;
                if (cur >= ans_sum)
                {
                        ans_sum = cur;
                        ans = make_pair(i, suff_max.first);
                }
                // cout << ans_sum << '\n';

        }
        printf("%d %d\n", ans.first + 1, ans.second + 1);
        return 0;
}