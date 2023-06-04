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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     int cnt = 0;
//     if(a<b)
//         cnt++;
//     if(a<c)
//         cnt++;
//     if(a<d)
//         cnt++;
//     cout << cnt << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     // freopen("in", "r", stdin);
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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=1e5;
// void solve(){
//     int n;
//     int cnt = 0;
//     cin >> n;
//     int a[maxn] = {0};
//     int b[maxn] = {0};
//     for (int i = 0; i < n;++i){
//         cin >> a[i];
//         if(!b[a[i]]){
//             cnt++;
//             b[a[i]] = 1;
//         }
//     }
//     if(n%2!=0&&cnt%2==0){
//         cnt--;
//     }
//     else if(n%2==0&&cnt%2!=0)cnt--;
//     cout << cnt << nl;
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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     char a[10][10] = {0};
//     for (int i = 0; i < 8; i++){
//         for (int j = 0; j < 8;j++){
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 1; i < 7; i++){
//         for (int j = 1; j < 7;j++){
//             if(a[i-1][j-1]=='#'&&a[i+1][j-1]=='#'){
//                 cout << i+1  << " " << j+1 << nl;
//                 return;
//             }
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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// //e
// void solve(){
//     int n, k;
//     cin >> n >> k;
//     int a[maxn] = {0};
//     int sum = 0;
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//         sum += a[i];
//     }
//     if(sum<k){
//         cout << -1 << nl;
//         return;
//     }
//     int l[maxn/2] = {0}, r[maxn/2] = {0};
//     int k1 = 0;
//     int cnt1 = 0;
//     for (int i = 0; i < (n+1)/2;i++){
//         if(a[i]){
//             cnt1++;
//             l[k1++] = cnt1;
//         }else{
//             cnt1++;
//         }
//     }
//     int k2 = 0;
//     int cnt2 = 0;
//     for (int i = n-1; i >= (n+1)/2;i--){
//         if(a[i]){
//             cnt2++;
//             r[k2++] = cnt2;
//         }else{
//             cnt2++;
//         }
//     }
//     // debug() << nl;
//     // for (int i = 0; i < k1;i++)
//     //     cout << l[i] << " ";
//     // cout << nl;
//     // for (int i = 0; i < k2;i++)
//     //     cout << r[i] << " ";
//     // cout << nl;
//     int x = sum - k;
//     int cnt = 0;
//     int lll = 0, rrr = 0;
//     int q = 0, p = 0;
//    // cout << x;
//     while(x){
//         if(q<k1&&l[q]<r[p]&&p<k2){
//             lll = l[q];
//             q++;
//             x--;
//         }else if(q<k1&&l[q]>r[p]&&p<k2){
//             rrr = r[p];
//             p++;
//             x--;
//         }else if(q<k1&&l[q]==r[p]&&p<k2){
//             if(lll>rrr){
//                 lll = l[q];
//                 q++;
//                 x--;
//             }else{
//                 rrr = r[p];
//                 p++;
//                 x--;
//             }
//         }else if(q>=k1){
//             rrr = r[p];
//             p++;
//             x--;
//         }else{
//             lll = l[q];
//             q++;
//             x--;
//         }
//     }
//     cnt = lll + rrr;
//     cout << cnt << nl;
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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     int x;
//     cin >> x;
//     int h = (s[0] - '0') * 10 + (s[1] - '0');
//     int m = (s[3] - '0') * 10 + (s[4] - '0');
//     // cout << h << " " << m << nl;
//     int hh = h, mm = m;
//     int cnt = 0;
//     int flag = 0;
//     while ((hh != h || mm != m)||!flag){
//         flag = 1;
//         string s1 = to_string(hh);
//         string s2 = to_string(mm);
//         if(s1.size()==1)
//             s1 = '0' + s1;
//         if(s2.size()==1)
//             s2 = '0' + s2;
//         reverse(all(s2));
//         if(s1==s2)
//             cnt++;
//         hh += x / 60;
//         mm += x % 60;
//         if(mm>=60){
//             mm %= 60;
//             hh++;
//         }
//         hh %= 24;
//     }
//     cout << cnt << nl;
// }

// int main()
// {
//     // ios::sync_with_stdio(0);
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
// typedef vector<ll> vll;
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// void solve(){
//     int n, s, maxx = -1;
//     cin >> n >> s;
//     int a[maxn]={0};
//     for (int i = 1; i <= n; ++i) {
//         cin >> a[i];
//     }
//     int l = 1, r = 1, cnt = 0;
//     while(l <= r && l <= n) {
//         while(r <= n && cnt <= s) {
//             cnt += a[r++];
//         }
//         if(cnt >= s) {
//             if(cnt > s)
//                 maxx = max(maxx, r - l - 1);
//             else
//                 maxx = max(maxx, r - l);
//         }
//         cnt -= a[l++];
//     }
//     if(maxx == -1) {
//         cout << -1 << endl;
//     } else {
//         cout << n - maxx << endl;
//     }
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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     ll n;
// 	cin>>n;
// 	map<ll,ll> mp;
// 	for(int i=0;i<n;i++){
// 		ll x;
//         cin >> x;
//         mp[x % 10] = minn(3ll, mp[x % 10] + 1);
//     }
// 	vector<ll> a;
// 	for(auto& it:mp){
// 		ll f = it.second;
// 		while(f--){//有几个放几个
// 			a.push_back(it.first);
// 		}
// 	}
//     for(auto i:a)
//         cout << i << " ";
//     cout << nl;
//     n = a.size();
// 	for(ll i=0;i<n;i++){
// 		for(ll j=i+1;j<n;j++){
// 			for(ll k=j+1;k<n;k++){
//                 ll sum = a[i] + a[j] + a[k];
//                 if(sum%10 == 3){
//                     cout << "yes" << nl;
//                     return;
// 				}
// 			}
// 		}
// 	}
//     cout << "no" << nl;
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
// #define print(fg) puts(fg ? "YES" : "NO")
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;

// void solve(){
//     int n, k;
//     int a[maxn]={0};
//     int cnt = 0;
//     cin >> n >> k;
//     int t = 0;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     for (int i = 2; i <= n; i++){
//         if(a[i-1]<a[i]*2)
//             t++;
//         else{
//             if(t>=k)
//                 cnt += t - k + 1;
//             t = 0;
//         }
//     }
//     if(t>=k)
//         cnt += t - k + 1;
//     cout << cnt << nl;
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
//     int x[maxn]={0};
//     cin >> n;
//     map<int, vector<int>> mp;
//     for (int i = 0; i < n; i++){
//         cin >> x[i];
//         mp[x[i]].push_back(i);
//     }
//     int a = x[0], l = 0, r = 1, ans = 1;
//     for (auto p : mp){
//         int b = p.first;//数字
//         vector<int> q = p.second;//出现的下标
//         int minn = 0, k = q[0];//minn为区间内最小非b的数量，k为区间左端点
//         for (int j = 0; j < q.size(); j++){//枚举全部下标
//             int i = q[j];//下标
//             int curr = j - (i - j);//当前区间内非b的数量=
//             if (curr < minn){//出现了更少的非b
//                 minn = curr;
//                 k = i;
//             }
//             int res = curr + 1 - minn;
//             if (res > ans){
//                 ans = res;
//                 a = b;
//                 l = k;
//                 r = i + 1;
//             }
//         }
//     }
//     cout << a << ' ' << l + 1 << ' ' << r << nl;
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
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// void solve(){
//     int N, S; cin >> N >> S;
//     vector<int> A(N);
//     for (int &a : A) cin >> a;
 
//     int sum = 0;
//     map<int, int> first;
//     first[sum] = -1;
//     int ans = N+1;
 
//     for (int i = 0; i < N; ++i) {
//         sum += A[i];
//         int need = sum - S;
//         cout << "need:" << need << " ";
//         if (first.count(need)){
//             ans = min(ans, N - i + first[need]);
//             cout <<"1:"<< ans << " ";
//         }
//         if (!first.count(sum)){
//             first[sum] = i;
//             cout <<"2:"<< i << " ";
//         }
//         cout << nl;
//     }
 
//     cout << (ans <= N ? ans : -1) << '\n';
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

