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
//     int a, b, c;
//     cin >> a >> b >> c;
//     if(a+b==c||a+c==b||b+c==a)
//         cout << "yes\n";
//     else
//         cout << "no\n";
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
//     map<int, int> mp;
//     cin >> n;
//     int flag = 0;
//     for (int i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         if (mp[x] > 0)
//             flag = 1;
//         else
//             mp[x]++;
//     }
//     if(flag)
//         cout << "no\n";
//     else
//         cout << "yes\n";
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
//     char c[10][10] = {0};
//     for (int i = 0; i < 8;i++)
//         for (int j = 0; j < 8;j++)
//             cin >> c[i][j];
//     char ans;
//     int b[10] = {0}, r[10] = {0};
//     for (int i = 0; i < 8;i++){
//         for (int j = 0; j < 8;j++){
//             if(c[i][j]=='R'){
//                 r[i]++;
//             }
//             if(c[i][j]=='B'){
//                 b[j]++;
//             }
//             if(r[i]==8){
//                 ans = 'R';
//             }
//             if(b[j]==8){
//                 ans = 'B';
//             }
//         }
//     }
//     cout << ans << nl;//不要非法退出
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     freopen("in", "r", stdin);
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
//     int a[maxn] = {0};
//     for (int i = 1; i <= n;i++)
//         cin >> a[i];
//     int mp[maxn] = {0};
//     vpii vp;
//     for (int i = n; i > 0; i--){
//         if(mp[a[i]])continue;
//         mp[a[i]] = 1;
//         vp.push_back({a[i], i});
//     }

//     int sum = -1;
//     for (int i = vp.size()-1; i >= 0;i--){
//         for (int j = i; j >= 0;j--){
//             if(__gcd(vp[i].first,vp[j].first)==1){
//                 // debug();
//                 // cout << i <<" "<<j << nl;
//                 sum = max(sum, vp[i].second + vp[j].second);
//             }
//         }
//     }
//     cout << sum << nl;
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
//     int n, q;
//     cin >> n >> q;
//     vector<ll> arr(n), v(n), sum(n + 1, 0);
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//         if(!i) {//前缀和
//             sum[i + 1] = arr[i];
//         } else {
//             sum[i + 1] = arr[i] + sum[i];
//         }
//         if(i && arr[i] < v[i - 1]) { //构造非严格递增数组
//             v[i] = v[i - 1];
//         } else {
//             v[i] = arr[i];
//         }
//     }

//     int t;
//     for (int j = 0; j < q; ++j) {
//         cin >> t;
//         int idx = upper_bound(all(v), t) - v.begin();
//         cout << sum[idx] << " ";
//     }
//     cout << endl;
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
//     ll cnt[2]; cnt[0] = 0; cnt[1] = 0;
//     bool found[2]; found[0] = false; found[1] = false;
//     int Q; cin >> Q;
//     while(Q--) {
//         int D; cin >> D; D--;
//         ll K; cin >> K;
//         string S; cin >> S;
//         for (auto &a : S){
//             if (a == 'a') {
//                 cnt[D] += K;
//             } else {
//                 found[D] = true;
//             }
//         }
//         if (found[1]) {
//             cout << "YES" << nl;
//         } else if (found[0]) {
//             cout << "NO" << nl;
//         } else {
//             cout << (cnt[0] < cnt[1] ? "YES" : "NO") << nl;
//         }
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
// typedef vector<pair<ll, ll>> vpll;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5 + 5;
// void solve(){
//     int n;
//     cin >> n;
//     vi a(n + 1);
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];

//     vi ans;
//     vector<bool> used(n + 1);
//     int now = 0;
//     for (int i = 1; i <= n; i++){
//         int id = -1;
//         int mx = 0;
//         int need = INT_MAX ^ now;
//         for (int j = 1; j <= n; j++){
//             if (used[j])
//                 continue;
//             if ((need & a[j]) > mx){
//                 mx = (need & a[j]);
//                 id = j;
//             }
//         }
//         if (id == -1){
//             for (int j = 1; j <= n; j++){
//                 if (!used[j])
//                     ans.push_back(a[j]);
//             }
//             break;
//         }
//         else
//         {
//             used[id] = 1;
//             ans.push_back(a[id]);
//             now |= a[id];
//         }
//     }

//     for (int x : ans)
//         cout << x << ' ';
// }

// int main(){
//     // ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }
