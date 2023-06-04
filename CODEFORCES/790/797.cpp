// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// int a[maxn] = {0};
// void solve(){
//     // int n, m;
//     // cin >> n >> m;
//     // string s;
//     // cin >> s;
//     // //cout << s;
//     // for (int i = 0; i < n; ++i){
//     //     int cnt = 0;
//     //     for (int j = i; j < i + m && j < n; ++j){
//     //         if(s[j]=='B')
//     //             cnt++;
//     //     }
//     //     a[i] = cnt;
//     // }
//     // int maxx = 0;
//     // for (int i = 0;i<n;i++){
//     //     maxx = max(maxx, a[i]);
//     // }
//     // cout << max(0, m - maxx) << nl;
//     int n, k, maxu = 0, j = 0, b = 0;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     for (int i = 0; i < n; i++) {
//         for (; j < i + k && j < n; j++) {
//             b += (s[j] == 'B');
//         }
//         maxu = max(maxu, b);
//         b -= (s[i] == 'B');
//     }
//     cout << max(0, k - maxu) << endl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// // }

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
//     ll n, k, temp;
//     cin >> n >> k;
//     ll sum = 0;
//     vll a(n);
//     for (int i = 0; i < n; i++){
//         cin >> temp;
//         sum += temp / k;
//         a[i] = temp % k;
//     }
//     sort(all(a));
//     ll i = 0, j = n - 1;
//     while(i < j){
//         if(a[i] + a[j] < k)
//             i++;
//         else {
//             sum += (a[i] + a[j]) / k;
//             i++;
//             j--;
//         }
//     }
//     cout << sum << nl;
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
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// ll t, n, p[300];
// bool f[300];
// string s;
// ll dfs(int x){
//     vi so;
//     so.push_back(x);
//     f[x] = true;
//     while(so[0]!=p[x]){
//         x = p[x];
//         so.push_back(x);
//         f[x] = true;
//     }
//     string t = s;
//     long long res = 0;
//     for (int i = 1; i <= 1e9; i++){
//         string q = t;
//         for(auto v:so)
//             q[v-1]=t[p[v]-1];
//         t = q;
//         if(t==s)
//             return i;
//     }
// }
// ll gcd(ll a,ll b){
//     return b == 0 ? a : gcd(b, a % b);
// }
// void solve(){
//     cin >> n >> s;
//     for(int i=1;i<=n;i++){
//         cin >> p[i];
//         f[i] = false;
//     }
//     ll ans=1;
//     for(int i=1;i<=n;i++)
//         if(!f[i]){
//             ll now = dfs(i);
//             ans = ans * now / gcd(ans, now);
//         }
//     cout << ans << nl;
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
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = inf;
    set<int> seet;
    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            seet.insert(i);
            x = a[i];
        }
    }

    while (m--) {
        int i, d;
        cin >> i >> d, i--;
        a[i] -= d;
        auto pos = seet.upper_bound(i);
        while (pos != end(seet) && a[i] <= a[*pos]) {
            pos = seet.erase(pos);
        }
        if (--pos, a[*pos] > a[i]) {
            seet.insert(i);
        }
        cout << seet.size() << " \n"[m == 0];
    }
}

int main(){
    //ios::sync_with_stdio(0);
    // freopen("in", "r", stdin);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
