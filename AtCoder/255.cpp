// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// void solve(){
//     int r, c;
//     cin >> r >> c;
//     int a[4][4] = {0};
//     for (int i = 0; i < 2;i++)
//         for (int j = 0; j < 2;j++)
//             cin >> a[i][j];
//     cout << a[r - 1][c - 1];
// }

// int main(){
//     solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef vector<pair<int, int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5 + 5;

// double dist(double x1, double y1, double x2, double y2)
// {
//     return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
// }

// void solve()
// {
//     double n, k;
//     cin >> n >> k;
//     vector<double> v(k);
//     vector<bool> hasLight(n, false);
//     for (double i = 0; i < k; i++)
//     {
//         cin >> v[i];
//         v[i]--;
//         hasLight[v[i]] = true;
//     }
//     vector<double> x(n), y(n);
//     for (double i = 0; i < n; i++)
//     {
//         cin >> x[i] >> y[i];
//     }
//     double res = 0;
//     for (double i = 0; i < n; i++)
//     {
//         double curr = INT64_MAX;
//         for (double j = 0; j < k; j++)
//         {
//             curr = min(curr, dist(x[v[j]], y[v[j]], x[i], y[i]));
//         }
//         res = max(res, curr);
//     }
//     cout << setprecision(20) << sqrt(res) << '\n';
// }
// int main()
// {
//     // ios::sync_with_stdio(0);
//     freopen("in", "r", stdin);
//     int t = 1;
//     // cin>>t;
//     while (t--)
//         solve();
//     return 0;
// }
