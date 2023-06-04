// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     if(s.length()%2==0){
//         for (int i = 0; i < s.length() / 2;i++){
//             if(s[i]!=s[i+s.length()/2]){
//                 cout << "NO\n";
//                 return;
//             }
//         }
//         cout << "YES\n";
//     }else{
//         cout << "NO\n";
//     }
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

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// void solve(){
//     int n;
//     cin >> n;
//     int cnt = 0;
//     map<int,int> a;
//     for (int i = 1; i * i <= n;i++){
//         cnt++;
//         a[i * i] = 1;
//     }
//     for (int i = 1; i * i * i <= n;i++){
//         if(a[i*i*i]==1){
//             continue;
//         }else
//             cnt++;
//     }
//     cout << cnt << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//          solve();
//     }
//     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     ll a, s, ans = 0; cin >> a >> s;
//     ll t = 1;

//     while(s > 0){
//         int da = a % 10;
//         int ds = s % 10;

//         s /= 10;
//         a /= 10;

//         if(ds >= da){
//             ans += t *(ds - da);
//         }
//         else if(s%10 == 1){
//             s /= 10;
//             ans += t * (10 + ds - da);
//         }
//         else{
//             cout << -1 << '\n';
//             return;
//         }
//         t *= 10;
//     }

//     if(a == 0) cout << ans << '\n';
//     else cout << -1 << '\n';
//     return;
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

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef pair<ll, ll> pl;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vpii;
// typedef vector<pl> vpl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// const int maxn=1e6+5;
// void solve(){
//     ll n, m;
//     cin >> m >> n;
//     vvl v(m, vl(n));
//     for (int i = 0; i < m; i++){
//         for (int j = 0; j < n;j++)
//             cin >> v[i][j];
//     }
//     ll l = 0, r = 1e9 + 10;
//     ll ans = 0;
//     while (l <= r){
//         ll mid = l + (r - l) / 2;
//         bool can = false, can1 = false;
//         set<ll> st;
//         for (int i = 0; i < n; i++){
//             can = false;
//             for (int j = 0; j < m; j++){
//                 if (v[j][i] >= mid){
//                     can = true;
//                     if (st.count(j)){
//                         can1 = true;
//                     }
//                     st.insert(j);
//                 }
//             }
//             if (!can)
//                 break;
//         }
//         if (can && can1){
//             ans = mid;
//             l = mid + 1;
//         }
//         else{
//             r = mid - 1;
//         }
//     }
//     cout << ans << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//          solve();
//     }
//     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;

// const int maxn = 1e6 + 5;
// int a[maxn],cnt[maxn],num[maxn];
// set<int>st;
// void solve()
// {
//     int n;
// 		cin >> n;
// 		for (int i = 0 ; i <= n ; i ++)
// 		{
// 			cnt[i] = 0;
// 			num[i] = 0;
// 		}
// 		for (int i = 1 ; i <= n ; i ++)
// 		{
// 			cin >> a[i];
// 			cnt[a[i]] ++;
// 		}
// 		ll ans = 0;
// 		int pos = -1;
// 		int sum = 0;
// 		st.clear();
// 		for (int i = 0 ; i <= n ; i ++)
// 		{
// 			if (sum < i) ans = -1;
// 			if (ans == -1)
// 			{
// 				cout<<ans<<" ";
// 				continue;
// 			}
// 			sum += cnt[i];
// 			ans += cnt[i];
// 			if (i > 0)
// 			{
// 				if (cnt[i - 1]) ans -= cnt[i - 1];
// 				else
// 				{
// 					auto it = st.end();
// 					it --;
// 					while(st.size() && num[(*it)] == 0)
// 					{
// 						st.erase(it);
// 						it = st.end();
// 						it --;
// 					}
// 					ans += (i - 1) - ((*it) + 1) + 1;
// 					num[*it] --;
// 				}
// 			}
// 			if (cnt[i] >= 2)
// 			{
// 				st.insert(i);
// 				num[i] = cnt[i] - 1;
// 			}
// 			cout<<ans<<" ";
// 		}
// 		cout<<endl;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin>>s;
//     cout << (s[0] - '0') * (s[2] - '0') << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     t = 1;
//     while(t--){
//          solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     string s,t;
//     cin >> s;
//     cin >> t;
//     int cur;
//     for(int i=0; i<s.size(); i++){
//     	int del;
//     	if(t[i] > s[i])del = t[i] - s[i];
//     	else{
//     		del = 'z' - s[i] + t[i] - 'a' + 1;
//     	}
//     	if(i == 0)cur = del;
//     	else if(cur != del){
//     		cout<<"No\n"; return;
//     	}
//     }
//     cout<<"Yes\n";
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     t=1 ;
//     while(t--){
//          solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;

// const int maxn = 1e6 + 5;
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<unordered_set<int>> mp(n);
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         a--, b--;
//         mp[a].insert(b);
//         mp[b].insert(a);
//     }
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         v[i] = i;

//     vector<pii> edge(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> edge[i].first >> edge[i].second;
//     }
//     do
//     {
//         bool flag = true;
//         for (int i = 0; flag && i < m; i++)
//         {
//             int a = v[edge[i].first - 1];
//             int b = v[edge[i].second - 1];
//             flag = mp[a].count(b);
//         }
//         if (flag)
//         {
//             cout << "Yes";
//             return;
//         }
//     } while (next_permutation(v.begin(), v.end()));
//     cout << "No";
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     t=1;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     int n,m;
//     cin >> n >> m;
//     vector<vector<int>> G1(n,vector<int>(n,0)),G2(n,vector<int>(n,0));
//     for(int i=0;i<m;i++){
//         int a,b;
//         cin >> a >> b;
//         a--,b--;
//         G1[a][b]=1;
//         G1[b][a]=1;
//     }
//     for(int i=0;i<m;i++){
//         int a,b;
//         cin >> a >> b;
//         a--,b--;
//         G2[a][b]=1;
//         G2[b][a]=1;
//     }

//     vector<int> p(n);
//     for(int i=0;i<n;i++) p[i]=i;
//     do{
//         bool ans=true;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(G1[i][j]!=G2[p[i]][p[j]]){
//                     ans=false;
//                     break;
//                 }
//             }
//         }

//         if(ans){
//             cout << "Yes" << endl;
//             return 0;
//         }
//     }while(next_permutation(p.begin(),p.end()));

//     cout << "No" << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     t=1 ;
//     while(t--){
//          solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e6+5;
char mp[110][110];
bool rch[110][110];
void solve()
{
    int h,w;
    cin >> h >> w;
    for(int i = 0;i < h;i++){
        cin >> mp[i];
    }
    if(mp[0][0]=='.') rch[0][0] = true;
    for(int i = 1;i < w;i++) if(mp[0][i]== '.' && rch[0][i-1]) rch[0][i] = true;
    for(int i = 1;i < h;i++) if(mp[i][0]== '.' && rch[i-1][0]) rch[i][0] = true;
    for(int i = 1;i < h;i++){
        for(int j = 1;j < w;j++){
            if(mp[i][j] == '.' && (rch[i-1][j]||rch[i][j-1])) rch[i][j] = true;
        }
    }
    int ans = 0;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(rch[i][j]) ans = max(ans,i+j+1);
        }
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0);
    int t;
    //cin >> t ;
    t = 1;
    while(t--){
         solve();
    }
    return 0;
}
