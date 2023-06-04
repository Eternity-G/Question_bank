
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int a,b;
//     cin >> a >> b;
//     if(b%a==0){
//         cout << 1 << " " << b / a<<"\n";
//     }else{
//         cout << "0 0\n";
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     int sum = (s[0] - 'a') * 26 + (s[1] - 'a');
//     // cout << sum << endl;
//     // cout <<"cheshi:" <<(s[1] - 'a') - (s[0] - 'a') << endl;
//     if(s[1]-'a'>s[0]-'a'){
//         cout << sum - (s[0] - 'a')  << endl;
//     }else{
//         cout << sum - (s[0] - 'a') +1 << endl;
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// ll ksm(ll a, ll b) {
//     ll ans = 1, base = a;
//     while(b != 0) {
//         if(b & 1 != 0) {
//             ans *= base;
//         }
//         base *= base;
//         b >>= 1;
//     }
//     return ans;
// }
// void solve(){
//     string s, t;
//     cin >> s >> t;
//     if(t.find('a')!=-1&&t.length()!=1){
//         cout << "-1\n";
//     }else if(t.find('a')!=-1&&t.length()==1){
//         cout << "1\n";
//     }else{
//         ll sum = 0, cnt = 0;
//         for (int i = 0; i < s.length();i++){
//             if(s[i]=='a')
//                 cnt++;
//         }
//         sum = (ll)pow(2, cnt);
//         cout << sum << "\n";
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// #define all(a) a.begin(), a.end()
// #define nl "\n"
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n;
//     cin>>n;
//     vi arr(n);
//     for (int i = 0; i < n;i++)
//         cin >> arr[i];
//     vi b = arr;
//     sort(all(b));
//     for (ll i = n % 2; i < n; i += 2){
//         if(arr[i]>arr[i+1])
//             swap(arr[i], arr[i + 1]);
//     }
//     if(arr == b){
//         cout<<"YES"<<nl;
//     }
//     else{
//         cout<<"NO"<<nl;
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
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
//     int n;
//     int a[maxn] = {0};
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     int ans = inf;
//     a[0] = a[n + 1] = inf;
//     for (int i = 1; i <= n; i++) {
//         int g[3] = {a[i - 1], a[i + 1], (a[i] + 1) / 2};
//         sort(g, g + 3);
//         ans = min(ans, g[1]);
//     }
//     for (int i = 1; i < n; i++) {
//         int t = max({(a[i] + 1) / 2, (a[i + 1] + 1) / 2, (a[i] + a[i + 1] + 2) / 3});
//         ans = min(ans, t);
//     }
 
//     for (int i = 1; i + 2 <= n; i++) {
//         ans = min(ans, a[i] / 2 + a[i + 2] / 2 + 1);
//     }
//     sort(a + 1, a + n + 1);
//     ans = min(ans, (a[1] + 1) / 2 + (a[2] + 1) / 2);
//     cout << ans << nl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t = 1;
//    // cin>>t;
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
// const int maxn=1010;

// int g[maxn][maxn];
// int col[maxn], cnt;

// void solve(){
//     int n, m, q;
//     cin >> n >> m >> q;
//     for (int i = 1; i <= n; ++i)
//         for (int j = 1; j <= m; ++j) {
//             char c;
//             cin >> c;
//             g[i][j] = c == '*';
//         }
//     for (int j = 1; j <= m; ++j) {
//         for (int i = 1; i <= n; ++i) {
//             col[j] += g[i][j];
//         }
//         cnt += col[j];
//     }
//     while (q--) {
//         int x, y;
//         cin >> x >> y;
//         int sign = 1;
//         if (g[x][y]) {
//             sign = -1;
//         }
//         g[x][y] ^= 1;//取反
//         col[y] += sign;
//         cnt += sign;
//         int s = cnt / n, r = cnt % n;
//         int sum = 0;
//         for (int i = 1; i <= s; ++i)
//             sum += col[i];
//         for (int i = 1; i <= r; ++i)
//             sum += g[i][s + 1];
//         cout << cnt - sum << nl;
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
// int n, m, q;
// char mp[1005][1005];
// int c[1005*1005];
// //树状数组
// void add(int x, int v){
// 	while (x<=n*m) {
// 		c[x] += v;
//         x += (x & (-x));
//     }
// }
// int getsum(int x) {
// 	int res = 0;
// 	while (x) {
//         res += c[x];
//         x -= (x & (-x));
//     }
// 	return res;
// }
// void solve(){
//     cin >> n >> m >> q;
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cin >> mp[i][j];
//             if (mp[i][j] == '*'){
//                 add((j - 1) * n + i, 1);
//                 sum++;
//             }
//         }
//     }
//     while (q--) {
//         int x, y;
//         cin >> x >> y;
//         if (mp[x][y] == '*'){
//             add((y - 1) * n + x, -1);
//             sum--;
//             mp[x][y] = '.';
//         }
            
//         else{
//             add((y - 1) * n + x, 1);
//             sum++;
//             mp[x][y] = '*';
//         }
//         cout << sum - getsum(sum) << "\n";
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t = 1;
//     //cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }
