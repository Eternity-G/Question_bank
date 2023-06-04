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
//     string s;
//     cin >> s;
//     if((s[0]=='Y'||s[0]=='y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='S'||s[2]=='s')&&s.size()==3){
//         cout << "YES\n";
//     }else
//         cout << "NO\n";
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
//     cin>>n;
//     string s;
//     cin>>s;
//     map<char, int> mp;
//     int cnt = 0;
//     for (int i = 0; i < n;i++){
//         if(!mp[s[i]]){
//             cnt += 2;
//             mp[s[i]]++;
//         }else{
//             cnt++;
//         }
//     }
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
//     cin>>n;
//     int a[maxn] = {0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     for (int i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         string s;
//         cin >> s;
//         int cnt = 0;
//         for (int i = 0; i < x;i++){
//             if(s[i]=='D'){
//                 cnt++;
//             }else{
//                 cnt--;
//             }
//         }
//         a[i] = (10 + a[i] + cnt) % 10;
//     }
//     for (int i = 0; i < n;i++){
//         cout << a[i] << " ";
//     }
//     cout << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//    // freopen("in", "r", stdin);
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
// //D
// void solve(){
//     int n;
//     cin >> n;
//     map<string, int> mp;
//     vector<string> ss;
//     for (int i = 0; i < n;i++){
//         string s;
//         cin >> s;
//         ss.push_back(s);
//         mp[s]++;
//     }
//     string yy = "";
//     for (int i = 0; i < n;i++){
//         int m = ss[i].length();
//         int flag = 1;
//         for (int j = 1; j <= m;j++){
//             string s1 = ss[i].substr(0, j);
//             string s2 = "";
//             for (int k = j; k < m;k++){
//                 s2 = s2 + ss[i][k];
//             }
//             if(mp[s1]&&mp[s2]){
//                 yy += '1';
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag)
//             yy += '0';
//     }
//     cout << yy << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//    // freopen("in", "r", stdin);
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
// int a[110][110];
// void solve(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n;i++){
//         string s;
//         cin >> s;
//         for (int j = 1; j <= n; j++)
//             a[i][j] = s[j - 1] - '0';
//     }
//     int ans = 0;
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= n;j++){
//           //  int cnt = a[i][j] + b[i][j] + c[i][j] + d[i][j];
//             int cnt = a[i][j] + a[n - j + 1][i] + a[n - i + 1][n - j + 1] + a[j][n - i + 1];
//             // 
//             if(cnt==2){
//                 ans += cnt;
//             }else{
//                 ans += cnt % 2;
//             }
//         }
//     }
//     //cout << ans << " ";
//     cout << ans / 4 << nl;
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
//     int n;
//     cin >> n;
//     vpii vp;
//     for (int i = 1; i <= n;i++){
//         int x;
//         cin >> x;
//         if(x<i)
//             vp.push_back({x, i});
//     }
//     ll ans = 0;
//     for (int i = 0; i < vp.size();i++){
//         int l = 0, r = i - 1, index = inf;
//         while(l<=r){
//             int mid = (l + r) / 2;
//             if(vp[mid].second<vp[i].first){
//                 index = mid;
//                 l = mid + 1;
//             }else{
//                 r = mid - 1;
//             }
//         }
//         if(index<i)
//             ans += index + 1;
//     }
//     cout << ans << nl;
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

// #if 0

// a[i][j] + a[n - j + 1][i] + a[n - i + 1][n - j + 1] + a[j][n - i + 1];

// a[i][j] + a[i][n - j + 1] + a[n - i + 1][n - j + 1] + a[]

// #endif

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
//         cin >> n;
//         vector <int> a(n);
//         vector <int> v;
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             if (a[i] < i + 1)
//                 v.push_back(i + 1);
//         }
//         ll ans = 0;
//         for (int i : v) {
//             ans += lower_bound(all(v), a[i - 1]) - v.begin();
//         }
//         cout << ans << endl;
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
//     ll n, k;
//     cin >> n >> k;
//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];//箱子硬币数
//     ll ans = 0;
//     ll sum = 0;
//     for(int i = 0; i < n; i++)
//         sum += arr[i];
//     int r = n - 1;
//     ans = max(ans, sum - k * n);//所有的都用好钥匙开
//     for(int i = n - 1; i >= 0; i--){
//         sum -= arr[i];
//         ll add = 0;//如果用坏钥匙，可以得到的金币数
//         for(int j = i; j <= r; j++)
//             arr[j] /= 2, add += arr[j];
//         //但会将每个未打开的箱子中的所有硬币减半，包括即将打开的箱子。
//         ans = max(ans, sum + add - k * i);//更新最大值
//         if(arr[r] == 0)
//             r--;
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
    string s;
    cin >> s;
    for (int i = 0; i < 3;i++){
        s[i]=toupper(s[i]);
    }
    if(s=="YES")
        cout << "YES\n";
    else
        cout << "NO\n";
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

