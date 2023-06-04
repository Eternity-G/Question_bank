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
//     int n, t, x;
//     scanf("%d", &n);
//     int d = 0;
//     for (int i = 1; i <= n; i++){
//         int x;
//         scanf("%d", &x);
//         d = __gcd(d, x);
//     }
//     if(d == 1){
//         puts("0");
//         return;
//     }
//     if(__gcd(d, n) == 1)
//         puts("1");
//     else if(__gcd(d, n - 1) == 1)
//         puts("2");
//     else
//         puts("3");
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
//     int t, n, f[maxn] = {0};
//     char s[maxn];
//     scanf("%d%s", &n, s + 1);
//     s[0] = '0';
//     for (int i = 1; i <= n; i++)
//         f[i] = f[i - 1] + (s[i] != s[i - 1]);
//     printf("%d\n", max(f[n] - 1, 0));
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

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf = 0x3f3f3f3f;
const int N = 2e5 + 5;
ll s[N], x[N];
int nonz_left[N], nonz_right[N], a[N];
ll f(int l, int r){
    return s[r] - s[l - 1] - (x[r] ^ x[l - 1]);
}
void solve(){
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
        x[i] = x[i - 1] ^ a[i];
        nonz_left[i] = a[i] == 0 ? nonz_left[i - 1] : i;
    }
    nonz_right[n + 1] = n + 1;
    for (int i = n; i >= 1; i--)
        nonz_right[i] = a[i] == 0 ? nonz_right[i + 1] : i;
    while (q--){
        int L, R;
        cin >> L >> R;
        int l = L, r = R;
        ll ans = f(l, r);
        if (ans == 0){
            cout << l << ' ' << l << '\n';
            continue;
        }
        int i = L;
        while (i <= R and f(i, R) == ans){
            int j = R;
            while (j >= i){
                if (f(i, j) == ans){
                    if (j - i < r - l){
                        l = i;
                        r = j;
                    }
                }
                else
                    break;
                j = nonz_left[j - 1];
            }
            i = nonz_right[i + 1];
        }
        cout << l << ' ' << r << '\n';
    }
}
int main(){
    // ios::sync_with_stdio(0);
    // freopen("in", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
