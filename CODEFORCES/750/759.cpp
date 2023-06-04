// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// const int maxn = 1e6 + 5;
// void solve(){
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     sort(v.begin(), v.end());
//     ll ans = 0;
//     for (int i = n - 1; i >= 0 && v[i] >= 0; i -= m)
//         ans += v[i];
//     for (int i = 0; i < n && v[i] < 0; i += m)
//         ans += abs(v[i]);
//     cout << 2 * ans - max(abs(v[0]), abs(v[n - 1])) << l;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
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
// const int maxn=2e5+5;
// int n, x, mx;
// int a[maxn];
// int ans[maxn];
// int len;
// void solve(){
//     cin >> n;
// 		mx = 1;
// 		len = 0;
// 		for(int i = 1; i <= n; i++){
// 			cin >> a[i];
// 			if(a[mx] <= a[i])
// 				mx = i;
// 		}
// 		ans[++len] = a[mx];
// 		for(int i = mx + 1; i <= n; i++){
// 			while(ans[len] <= a[i])
// 				len--;
// 			ans[++len] = a[i];
// 		}
// 		cout << len - 1 << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//          solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
int a[100010];
const int maxn = 1e6 + 5;
void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int len = 1 + a[1];
    for (int i = 2; i <= n; i++){
        if (a[i] + a[i - 1] == 0){
            len = -1;
            break;
        }
        if (a[i] == 1 && a[i - 1] == 1)
            len += 5;
        else if (a[i] == 1)
            len++;
    }
    cout << len << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
