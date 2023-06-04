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
//     string a, b;
//     cin >> a >> b;
//     if(a[a.size()-1]>b[b.size()-1]){
//         cout << "<" << nl;
//     }else if(a[a.size()-1]<b[b.size()-1]){
//         cout << ">" << nl;
//     }else {
//         if(a.size()>b.size()){
//             if(a[a.size()-1]=='S')
//                 cout << "<" << nl;
//             else
//                 cout << ">" << nl;
//         }else if(a.size()<b.size()){
//             if(a[a.size()-1]=='S')
//                 cout << ">" << nl;
//             else
//                 cout << "<" << nl;
//         }else
//             cout << "=" << nl;
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
//     if(n==2){
//         cout << 2 << " " << 1 << nl;
//     }else if(n==3){
//         cout << -1 << nl;
//     }else{
//         if(n%2==0){
//             for (int i = n; i >= 1;--i)
//                 cout << i << " ";
//             cout << nl;
//         }else{
//             cout << n - 1 << " " << n << " ";
//             for (int i = 1; i <= n - 2;i++)
//                 cout << i << " ";
//             cout << nl;
//         }
//     }
// }
// /*
// 1 2 3 4 5
// 4 5 1 2 3
// 1 2 3 4 5 6 7
// 6 7 1 2 3 4 5
// 1 2 3 4
// 4 3 2 1
//  */
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
//     vi a(n);
//     for (int i = 0; i < n;i++)
//         cin >> a[i];
//     vi s(n + 1);
//     for (int i = 0; i < n;i++)
//         s[i + 1] = s[i] + a[i];//前缀和
//     int ans = n;               //不能分割厚度为 n
//     for (int i = 1; i <= n;i++){
//         int res = i, k = i;//k 就是上一轮 i 的值
//         for (int j = i + 1; j <= n;j++){
//             if (s[j] - s[i] == s[k])
//             {   //到j位置之前的所有元素可以被分成两部分 1~i 与 i+1~j
//                 // 其中 1~i   的和就是 s[k] 因为起初 k = i;
//                 // 其中 i+1~j 的和就是 s[j]-s[i];
//                 //debug() << i << " " << j << " " << k << nl;
//                 res = max(res, j - k);
//                 k = j;
//                 //debug() <<"hou:"<< i << " " << j << " " << k << nl;
//             }
//         }
//         if (k == n) //分完了更新最小值
//             ans = min(ans, res);
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
// int swap_sort(vector<int>& v, int l, int r) {
//     if(l == r) return 0;
//     int x = l, mid = (l + r) / 2, y = mid + 1, cnt = 0;
//     cnt += swap_sort(v, l, mid);
//     cnt += swap_sort(v, y, r);
//     if(v[x] > v[y]) {
//         ++cnt;
//         rotate(v.begin() + x, v.begin() + y, v.begin() + r + 1);
//     }
//     return cnt;
// }
 
// void solve() {
//     int n;
//     cin >> n;
//     vi arr(n);
//     for(auto& i : arr) cin >> i;
//     int t = swap_sort(arr, 0, n - 1);
//     for (int i = 1; i < n; ++i) {
//         if(arr[i] < arr[i - 1]) {
//             cout << -1 << endl;
//             return;
//         }
//     }
//     cout << t << endl;
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
// int n, m;
// int arr[maxn];

// int solve(int l, int r) {
// 	if (r - l == 1) return 0;
// 	int mid = (l + r) >> 1;
// 	int mal = *max_element(arr + l, arr + mid);
// 	int mar = *max_element(arr + mid, arr + r);
// 	int ans = 0;
// 	if (mal > mar) {
// 		++ans;
// 		for (int i = 0; i < (mid - l); ++i)
// 			swap(arr[l + i], arr[mid + i]);
// 	}
// 	return solve(l, mid) + solve(mid, r) + ans;
// }

// int solve() {
// 	int ans = solve(0, m);
// 	if (is_sorted(arr, arr + m))
// 		return ans;
// 	return -1;
// }

// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		cin >> m;
// 		for (int i = 0; i < m; ++i)
// 			cin >> arr[i];
// 		cout << solve() << endl;
// 	}
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf = 0x3f3f3f3f;
const int maxn = 2e5+5;
void solve(){
    int n;
    cin>>n;
    vi a(n + 1);
    for (int i = 1; i <= n;i++)
        cin >> a[i];
    vb dp(n + 1, false);
    dp[0] = true;
    for (int i = 1; i <= n;i++){
        if (i + a[i] <= n && dp[i - 1])//在左边
            dp[i + a[i]] = true;
        if (i - a[i] - 1 >= 0 && dp[i - a[i] - 1])//在右边
            dp[i] = true;
    }
    cout << (dp[n] ? "yes" : "no") << nl;
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
