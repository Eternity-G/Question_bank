// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     ll n, i, a;
//     map<ll, ll>m;
//     cin >> n;
//     for (int i = 0;i<n;i++){
//         cin >> a;
//         m[abs(a)]++;
//     }
//     ll sum = m[0] ? 1 : 0;
//     for (i = 1; i <= 100; i++)sum += min(m[i], (ll)2);
//     cout << sum << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;

// const int inf = 0x3f3f3f3f;
// const int maxn = 1e6 + 5;
// void solve(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     string ans = "";
//     ans += s[0];
//     if (s[0] == s[1] || s[1] > s[0]){
//         cout << ans;
//         reverse(ans.begin(), ans.end());
//         cout << ans;
//     }
//     else{
//         for (int i = 1; i < n; i++){
//             if (s[i] <= s[i - 1])
//                 ans += s[i];
//             else
//                 break;
//         }
//         cout << ans;
//         reverse(ans.begin(), ans.end());
//         cout << ans;
//     }
//     cout << endl;
// }

// int main()
// {
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

// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n;cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     int ans=n-1;
//     for (int i=0;i<n;i++) {
//         for (int j=i+1;j<n;j++) {
//             int d=a[j]-a[i];
//             int m=j-i;
//             int c=m*a[i]-d*i;
//             int cur=0;
//             for (int k=0;k<n;k++) {
//                 int num=(d*k+c);
//                 if(num!=m*a[k]) cur++;
//             }
//             ans=min(ans,cur);
//         }
//     }
//     cout<<ans<<endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)solve();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int a[maxn] = {0};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[n];
    }
    int ans = inf;
    a[0] = a[n + 1] = inf;
    for (int i = 1; i <= n; i++) {
        int g[3] = {a[i - 1], a[i + 1], (a[i] + 1) / 2};
        sort(g, g + 3);
        ans = min(ans, g[1]);
    }
    for (int i = 1; i < n; i++) {
        int t = max({(a[i] + 1) / 2, (a[i + 1] + 1) / 2, (a[i] + a[i + 1] + 2) / 3});
        ans = min(ans, t);
    }
 
    for (int i = 1; i + 2 <= n; i++) {
        ans = min(ans, a[i] / 2 + a[i + 2] / 2 + 1);
    }
    sort(a + 1, a + n + 1);
    ans = min(ans, (a[1] + 1) / 2 + (a[2] + 1) / 2);
    cout << ans << nl;
}

int main(){
    ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
