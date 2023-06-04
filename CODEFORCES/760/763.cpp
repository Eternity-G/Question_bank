// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// const int inf = 0x3f3f3f3f;
// const int maxn = 1e6 + 5;
// void solve()
// {
//     ll n, m, rb, cb, rd, cd, count = 0, dr = 1, dc = 1;
//     cin >> n >> m >> rb >> cb >> rd >> cd;

//     while (1)
//     {
//         if (rb == rd || cb == cd)
//         {
//             break;
//         }
//         if (dr == 1 && rb == n)
//         {
//             dr = -1;
//         }
//         else if (dr == 1 && rb == 1)
//         {
//             dr = 1;
//         }
//         if (dc == 1 && cb == m)
//         {
//             dc = -1;
//         }
//         else if (dc == -1 && cb == 1)
//         {
//             dc = 1;
//         }
//         rb += dr;
//         cb += dc;
//         count++;
//     }
//     cout << count << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 5;
void solve()
{
    int n;
    cin >> n;
    map<pair<int, int>, bool> mp;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        mp[{l[i], r[i]}] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = l[i]; j <= r[i]; j++)
        {
            if ((j == l[i] || mp[{l[i], j - 1}]) && (j == r[i] || mp[{j + 1, r[i]}]))
            {
                cout << l[i] << " " << r[i] << " " << j << endl;
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
