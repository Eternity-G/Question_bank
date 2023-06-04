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
//     int m1 = 0, m2 = 0, m3 = 0, m4 = 0;
//     for (int i = 0; i < n;i++){
//         int x,y;
//         cin >> x >> y;
//         if (x == 0 && y < 0)
//             m1 = max(m1, -y);
//         if (x == 0 && y > 0)
//             m2 = max(m2, y);
//         if (x < 0 && y == 0)
//             m3 = max(m3, -x);
//         if (x > 0 && y == 0)
//             m4 = max(m4, x);
//     }
//     int ans = (m1 + m2 + m3 + m4) * 2;
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
const int maxn = 3e5+5;
int a[maxn];
void solve(){
    int n;
    cin>>n;
    int mx = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int ok = 1;
    for (int i = 2;i<=n;i++){
        if(a[i]<a[i-1]){
            for (int j = i + 1;j<=n;j++){
                if(a[j]>a[j-1])
                    ok = 0;
            }
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << nl;
}

int main(){
    //ios::sync_with_stdio(0);
    //freopen("in", "r", stdin);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
