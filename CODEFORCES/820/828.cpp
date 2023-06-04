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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     int n;
//     cin >> n;
//     vi a(n);
//     for (int i = 0; i < n;i++)
//         cin >> a[i];
//     string s;
//     cin >> s;
//     int flag = 0;
//     for (int i = 0; i < n;i++){
//         for (int j = i + 1; j < n;j++){
//             if(a[i]==a[j]){
//                 if(s[i]!=s[j])
//                     flag = 1;
//             }
//         }
//     }
//     if(flag)
//         cout << "no" << nl;
//     else
//         cout << "yes" << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//    // freopen("in", "r", stdin);
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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     ll n, q;
//     cin >> n >> q;
//     vll a(n), b(n);
//     ll sum = 0;
//     for (int i = 0; i < n;i++)
//         cin >> a[i], sum += a[i];
//     ll ji = 0, ou = 0;
//     for (int i = 0; i < n;i++){
//         if(a[i]%2==0)
//             ou++;
//         else
//             ji++;
//     }
//     while (q--){
//         ll a, b;
//         cin >> a >> b;
//         if (a){//1 ji
//             sum += b * ji;
//             if(b%2==0){//b ou

//             }else{// b ji
//                 ou += ji;
//                 ji = 0;
//             }
//         }else{// 0 ou
//             sum += b * ou;
//             if(b%2==0){//b ou

//             }else{// b ji
//                 ji += ou;
//                 ou = 0;
//             }
//         }
//         cout << sum << nl;
//     }
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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     int n;
//     cin >> n;
//     char c;
//     cin >> c;
//     string s;
//     cin >> s;
//     // string ss = s + s;
//     // if(c=='g')
//     //     cout << 0 << nl;
//     // else {
//     //     int cnt = 0, maxx = 0;
//     //     int flag = 1;
//     //     for (int i = 0; i < n*2; i++){
//     //         if(ss[i]=='g'){
//     //             cnt = 0;
//     //             flag = 1;
//     //         }else if(ss[i]==c && flag){
//     //             cnt = 1;
//     //             flag = 0;
//     //         }else{
//     //             cnt++;
//     //         }
//     //         maxx = max(cnt, maxx);
//     //     }
//     //     cout << maxx << nl;
//     // }
//     vi a;
//     for (int i = 0; i < n;i++)
//         if(s[i]=='g')
//             a.push_back(i);
//     // for (auto i:a)
//     //     cout << i << " ";
//     // cout << nl;
//     if (c == 'g')
//         cout << 0 << nl;
//     else{
//         int fist = a[0], maxx = 0;
//         for (int i = 0; i < n;i++){
//             if(s[i]==c){
//                 auto x = upper_bound(all(a), i) ;
//                 if(x!=a.end()){
//                     maxx = max(maxx, *x - i);
//                 }else{
//                     maxx = max(maxx, n - i + fist + 1 - 1);
//                 }
//             }
//         }
//         cout << maxx << nl;
//     }
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
// void solve(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int j = 0; j < n; j++)
//         cin >> a[j];
//     vector<int> b(n), c(n);
//     for (int j = 0; j < n; j++){
//         b[j] = __builtin_ctz(a[j]);
//         c[j] = __builtin_ctz(j + 1);
//     }
//     int cnt = 0;
//     for (int j = 0; j < n; j++)
//         cnt += b[j];
//     sort(c.begin(), c.end(), greater<int>());
//     int ans = 0;
//     for (int j = 0; j < n; j++){
//         if (cnt < n){
//             cnt += c[j];
//             ans++;
//         }
//     }
//     if (cnt < n)
//         cout << -1 << endl;
//     else
//         cout << ans << endl;
// }

// int main(){
//     // ios::sync_with_stdio(0);
//    // freopen("in", "r", stdin);
//     int t = 1;
//     cin >> t;
//     while (t--)
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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     int n;cin >> n;
//     char c;cin >> c;
//     string s;cin >> s;
//     string ss = s + s;
//     //cout << ss << nl;
//     if(c=='g')
//         cout << 0 << nl;
//     else {
//         ll cnt , maxx = 0;
//         int flag = 1;
//         for (int i = 0; i < n * 2; i++){
//             if(ss[i]=='g'){
//                 cnt = 0;
//                 flag = 1;
//             }else if(ss[i]==c && flag){
//                 cnt = 1;
//                 flag = 0;
//             }else if(!flag){
//                 cnt++;
//             }
//             //cout << cnt << " ";
//             maxx = max(cnt, maxx);
//         }
//         cout << maxx << nl;
//     }
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

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    cout << min(x, y) << " " << (x + y <= n ? 0 : x + y - n);
}
