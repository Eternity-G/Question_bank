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
// const int maxn=1e6+5;
// void solve(){
//     int n, k;
//     cin >> n >> k;
//     ll sum = 0;
//     for (int i = 0; i < n;i++){
//         int x;
//         cin>>x;
//         sum += x;
//     }
//     cout << max(sum - k,0ll) << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }


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
//     int n, q;
//     cin >> n >> q;
//     int p[n+1] = {0};
//     for (int i = 0; i < n;i++)
//         cin >> p[i];
//     sort(p, p + n);
//     //超时
//     // while(q--){
//     //     int a, b;
//     //     cin >> a >> b;
//     //     int sum = 0;
//     //     for (int i = n - a; i < n - a + b; i++)
//     //         sum += p[i];
//     //     cout << sum << nl;
//     // }
//     ll sum[n + 1] = {0};
//     sum[1] = p[0];
//     for (int i = 2; i <= n;i++)
//         sum[i] = sum[i - 1] + p[i - 1];
//     while(q--){
//         int a, b;
//         cin >> a >> b;
//         cout << sum[n - a + b] - sum[n - a] << nl;
//     }
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     //cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }

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
// const int maxn=1e6+5;
// bool check(string &a,int i,int n,char b,char c){
//     if(i + 1 >= n)
//         return 0;
//     for (int j = i + 1; j < n; ++j) {
//         if(a[j] == b)
//             continue;
//         else if(a[j] == c) {
//             swap(a[i], a[j]);
//             return 1;
//         } else {
//             return 0;
//         }
//     }
// }
// void solve(){
//     int n;
//     string a, b;
//     cin >> n >> a >> b;
//     bool flag = 1;
//     for (int i = 0; i < n && flag; ++i) {
//         if(a[i] != b[i]) {
//             if(a[i] == 'b' && b[i] == 'c') 
//                 flag = check(a, i, n,'b','c');
//             else if(a[i] == 'a' && b[i] == 'b') 
//                 flag = check(a, i, n,'a','b');
//             else 
//                 flag = 0;
//         }
//     }
//     if(a != b)
//         flag = 0;
//     if(flag)
//         cout << "yes" << nl;
//     else
//         cout << "no" << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     // freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }
