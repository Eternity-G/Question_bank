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
//     a--;
//     b = abs(b - c) + c - 1;
//     if(a<b)
//         cout << 1 << nl;
//     else{
//         if(a>b)
//             cout << 2 << nl;
//         else
//             cout << 3 << nl;
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
//     string t;
//     cin >> t;
//     string s;
//     for (int i = n - 1; i >= 0;){
//         if(t[i]=='0'){
//             int x = (t[i - 2] - '0') * 10 + t[i - 1] - '0' - 1;
//             s += 'a' + x;
//             i -= 3;
//         }else{
//             s += 'a' + t[i] - '0' - 1;
//             i--;
//         }
//     }
//     reverse(all(s));
//     cout << s << nl;
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
//     string s;
//     cin >> s;
//     int n = s.length();
//     vi p[26];
//     for (int i = 0; i < n;i++)
//         p[s[i] - 'a'].push_back(i);
//     int x = s[0] - 'a', y = s[n - 1] - 'a';
//     if(x>y){
//         swap(x, y);
//         for (int i = 0; i < 26;i++)
//             reverse(all(p[i]));
//     }
//     vi ans;
//     for (int i = x; i <= y;i++)
//         ans.insert(ans.end(), p[i].begin(), p[i].end());
//     cout << abs(s[0] - s[n - 1]) << " " << ans.size() << nl;
//     if(ans[0])
//         reverse(all(ans));
//     for (int i = 0; i < (int)ans.size();i++)
//         cout << ans[i] + 1 << " \n"[i == (int)ans.size() - 1];
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
//     vi x(n);
//     for (int i = 0; i < n;i++)
//         cin >> x[i];
//     for (int i = 0; i < n;i++){
//         int y;
//         cin >> y;
//         x[i] = y - x[i];
//     }
//     sort(all(x));
//     int p = lower_bound(all(x), 0) - x.begin();
//     int ans = 0;
//     for (int i = 0, j = n - 1; i < p;i++){
//         if (j >= p && x[i] + x[j] >= 0){
//             ans++;
//             j--;
//         }
//     }
//     ans += (n - p - ans) / 2;
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
const int inf = 0x3f3f3f3f;
const int maxn = 2e5+5;
void solve(){
    for (int i = 1;;i++){
        for (int j = 1; j < i;j++){
            ll x, y;
            cout << "? " << i << " " << j << nl;
            cin >> x;
            cout << "? " << j << " " << i << nl;
            cin >> y;
            if(x==-1||y==-1){
                cout << "! " << i - 1 << nl;
                return;
            }
            if(x!=y){
                cout << "! " << x + y << nl;
                return;
            }
        }
    }
}

int main(){
    //ios::sync_with_stdio(0);
    //freopen("in", "r", stdin);
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
