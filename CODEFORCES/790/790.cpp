// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     int a=0, b=0;
//     for (int i = 0; i < 6;i++){
//         if(i<3){
//             a += (s[i] - '0');
//         }else{
//             b += (s[i] - '0');
//         }
//     }
//     if (a == b)
//     {
//         cout << "yes\n";
//     }
//     else
//     {
//         cout << "no\n";
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int sum = 0;
//     int n;
//     cin >> n;
//     int a[100] = {0};
//     for (int i = 0;i<n;i++){
//         cin >> a[i];
//         // sum += a[i];
//     }
//     sort(a, a + n);
//     cout << sum - a[0] * n << nl;
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// int n, m;
// int f(string a,string b){
//     int cnt = 0;
//     for (int i = 0;i<m;i++){
//         cnt += max(a[i], b[i]) - min(a[i], b[i]);
//     }
//     return cnt;
// }
// void solve(){
//     cin >> n >> m;
//     int minn = inf;
//     vector<string> s;
//     for (int i = 0; i < n;i++){
//         string ss;
//         cin >> ss;
//         s.push_back(ss);
//     }
//     for (int i = 0;i<n;i++){
//         for (int j = i + 1; j < n;j++){
//             minn = min(minn, f(s[i], s[j]));
//         }
//     }
//     cout << minn << nl;
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// int dx[] = {1, 1, -1, -1};
// int dy[] = {1, -1, 1, -1};
// int n, m;

// int a[205][205] = {0};
// int f(int x, int y){
//     int ans = a[x][y];
//     int flag = 1;
//     int tt = 1;
//     while (flag){
//         int t = 0;
//         for (int i = 0; i < 4;i++){
//             int dxx = x + tt * dx[i];
//             int dyy = y + tt * dy[i];
//             if(dxx<0||dxx>=n||dyy<0||dyy>=m){
//                 t++;
//                 continue;
//             }
//             ans += a[dxx][dyy];
//         }
//         if(t==4){
//             flag = 0;
//         }
//         tt++;
//     }
//     return ans;
// }
// void solve(){
//     cin >> n >> m;
//     for (int i = 0;i<n;i++){
//         for (int j = 0;j<m;j++){
//             cin >> a[i][j];
//         }
//     }
//     int maxx = 0;
//     for (int i = 0; i < n;i++){
//         for (int j = 0;j<m;j++){
//             maxx = max(maxx, f(i, j));
//         }
//     }
//     cout << maxx << nl;
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// bool cmp(int x,int y){
//     return x > y;
// }
// int a[maxn];
// int b[maxn];
// void solve(){
//     int n,m;
//     cin >> n >> m;
//     for (int i = 0;i<n;i++){
//         cin >> a[i];
//     }
//     sort(a, a + n, cmp);
//     b[0] = a[0];
//     for (int i = 1;i<n;i++){
//         b[i] = b[i - 1] + a[i];
//     }
//     for (int i = 0; i < m;i++){
//         int x;
//         cin >> x;
//         int mm = lower_bound(b, b + n, x) - b + 1;
//         //cout << mm << nl;
//         if(mm<=n){
//             cout << mm << nl;
//         }else{
//             cout << -1 << nl;
//         }
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// void solve(){
//     int n, k;
//     cin >> n >> k;
//     int x1;
//     map<int, int> mp;
//     for (int i = 0;i<n;i++){
//         cin >> x1;
//         mp[x1]++;
//     }
//     vector<int> v;
//     for(auto i:mp){
//         if(i.second>=k)
//             v.push_back(i.first);
//     }
//     int maxx = 0, l = -1, r = -1;
//     for (int i = 0; i < v.size();i++){
//         int j = i + 1;
//         while(j<v.size()&&v[j]==v[j-1]+1)
//             j++;
//         if(j-i>maxx){
//             maxx = j - i;
//             l = v[i];
//             r = v[j - 1];
//         }
//         if(j>=v.size()){
//             break;
//         }else{
//             i = j - 1;
//         }
//     }
//     if (l==-1)
//         cout << -1 << nl;
//     else
//         cout << l << " " << r << nl;
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// typedef vector<pair<int, int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf = 0x3f3f3f3f;
// const int maxn = 1e6 + 5;

// string s;
// vector<vi> sons;
// vi w, b;
// int ans = 0;

// void dfs(int v)
// {
//     if (s[v] == 'W')
//     {
//         w[v]++;
//     }
//     else
//     {
//         b[v]++;
//     }
//     for (int to : sons[v])
//     {
//         dfs(to);
//         w[v] += w[to];
//         b[v] += b[to];
//     }
//     if (w[v] == b[v])
//     {
//         ans++;
//     }
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     sons.clear();
//     sons.resize(n);
//     w.assign(n, 0);
//     b.assign(n, 0);
//     for (int i = 1; i < n; i++)
//     {
//         int p;
//         cin >> p;
//         p--;
//         sons[p].push_back(i);
//     }
//     cin >> s;
//     ans = 0;
//     dfs(0);
//     //debug();
//     cout << ans << '\n';
// }
// int main()
// {
//     //ios::sync_with_stdio(0);
//     freopen("in", "r", stdin);
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
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n;
//     cin >> n;
//     vi arr(n);
//     for (int i = 1; i <= n; ++i) {
//         cin >> arr[i];
//     }
//     int ret = 0;
//     for (int i = 1; i <= n; ++i) {
//         for (int j = i + 1; j <= n; ++j) {
//             if (arr[j] <= arr[i])
//                 ret++;
//         }
//     }
//     cout << ret << nl;
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
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// int a[maxn], c[maxn], n;
// void add(int x){
//     while(x<=n){
//         c[x]++;
//         x += (x & -x);
//     }
// }
// int qry(int x){
//     int s = 0;
//     while(x){
//         s += c[x];
//         x -= (x & -x);
//     }
//     return s;
// }
// void solve(){
//     cin >> n;
//     for (int i = 1; i <= n;i++){
//         cin >> a[i];
//         c[i] = 0;
//     }
//     ll ans = 0;
//     for (int i = n; i >= 1; i--){
//         ans += qry(a[i]);
//         add(a[i]);
//     }
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

// void solve(){
//     int x = 100, y = 200;
//     printf("%d", (x, y));
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     freopen("in", "r", stdin);
//     int t = 1;
//     //cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }
