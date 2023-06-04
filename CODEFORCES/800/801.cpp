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
//     int n,m;
//     cin >> n >> m;
//     int a[50][50] = {0};
//     int maxx = 1;
//     int maxy = 1;
//     for (int i = 1; i <= n;i++)
//         for (int j = 1; j <= m;j++)
//             cin >> a[i][j];
//     int maxu = a[1][1];
//     for (int i = 1; i <= n;i++)
//         for (int j = 1; j <= m;j++){
//             if(a[i][j]>maxu){
//                 maxx = i;
//                 maxy = j;
//                 maxu=a[i][j];
//             }
//         }
//     maxx = max(maxx, n - maxx + 1);
//     maxy = max(maxy, m - maxy + 1);
//     cout << maxx * maxy << nl;
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
//     int n;
//     cin >> n;
//     int a[60] = {0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     int minn = inf, index = 0;
//     if(n%2==0){
//         for (int i = 0; i < n;i++){
//             if(a[i]<minn){
//                 minn = a[i];
//                 index = i;
//             }
//         }
//         if(index%2==0){
//             cout << "Joe\n";
//         }else
//         cout << "Mike\n"; 
//     }else{
//         cout << "Mike\n";
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
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// int a[1010][1010];
// map<pair<int, int>, set<int>> mp;
// int n, m;
// void solve(){
//     mp.clear();
//     cin >> n >> m;
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= m;j++){
//             cin >> a[i][j];
//         }
//     }
//     mp[{0, 1}].insert(0);
//     mp[{1, 0}].insert(0);
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= m;j++){
//             //mp[{i, j}] = mp[{i - 1, j}] + mp[{i, j - 1}] + a[i][j];
//             for (auto k:mp[{i-1, j}]){
//                 mp[{i, j}].insert(k + a[i][j]);
//             }

//             for (auto k:mp[{i, j - 1}]){
//                 mp[{i, j}].insert(k + a[i][j]);
//             }
//         }
//     }

//     bool ok = mp[{n, m}].count(0);
//     puts(ok ? "Yes" : "No");
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
//     int n, m;
// 	cin >> n >> m;
// 	vector<vector<int>> a(n, vector<int>(m, 0));
// 	vector<vector<int>> l(n, vector<int>(m, 1e9));
// 	vector<vector<int>> r(n, vector<int>(m, -1e9));
// 	for (auto& x : a) {
// 		for (auto& i : (x))
//             cin >> i;
//     }
// 	if ((n + m) % 2 == 0) {
// 		cout << "NO\n";
// 		return;
// 	}
// 	l[0][0] = r[0][0] = a[0][0];
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			if (i) {
// 				l[i][j] = min(l[i][j], l[i - 1][j] + a[i][j]);
// 				r[i][j] = max(r[i][j], r[i - 1][j] + a[i][j]);
// 			}
// 			if (j) {
// 				l[i][j] = min(l[i][j], l[i][j - 1] + a[i][j]);
// 				r[i][j] = max(r[i][j], r[i][j - 1] + a[i][j]);
// 			}
// 		}
// 	}
// 	if (l[n - 1][m - 1] <= 0 && r[n - 1][m - 1] >= 0)
// 		cout << "YES\n";
// 	else
// 		cout << "NO\n";
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
const int maxn=2e5+5;
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    if (n == 1) {
        cout << "0\n";
        return;
    }
    
    if (all_of(adj.begin(), adj.end(), [&](auto a) { return a.size() <= 2; })) {
        cout << "1\n";
        return;
    }
    
    int ans = 0;
    vector<bool> vis(n);
    for (int i = 0; i < n; i++) {
        if (adj[i].size() == 1) {
            ans++;
            int j = adj[i][0], k = i;
            while (adj[j].size() <= 2) {
                k ^= adj[j][0] ^ adj[j][1];
                swap(j, k);
            }
            if (!vis[j]) {
                vis[j] = true;
                ans--;
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    //ios::sync_with_stdio(0);
    freopen("in", "r", stdin);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
