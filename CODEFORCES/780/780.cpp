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
//     int a,b;
//     cin >> a >> b;
//     int x = a + b * 2 + 1;
//     if(a==0)
//         x = 1;
//     cout << x << nl;
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
//     int n;cin>>n;
//     vi a(n), b(n);
//     for (int i = 0;i<n;i++){
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     for(auto i:a){
//         cout << i << " ";
//     }
//     cout << nl;
//     /*
// 1 2 3 4 6
// 0 1 2 3 5
// 0 0 1 2 4
// 0 0 0 1 3
// 0 0 0 0 2
//  */

//     ll sum = a[0];
//     for (int i = 0; i < n - 2; i++){
//         b[i] = a[i + 1] - a[i];
//         sum += b[i];
//     }
//     if(n>=2)
//         a[n - 1] -= sum;
//     if(a[n-1]>=2)
//         cout << "no\n";
//     else
//         cout << "yes\n";
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

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf = 0x3f3f3f3f;
const int maxn = 2e5 + 5;
void solve()
{
    string s;
    cin>>s;
    ll n;
    n = s.size();
    vll last(26, -1);//字符最后一次出现的位置
    ll ans = 0;
    ll del = 0;
    for (int i = 0;i<n;i++){
        ll as = s[i]-'a';
        if(last[as]>=del){//在last位置之后又找到了一个与as配对的字符
            ans--;
            del = i + 1;//当前字符的后一个位置
        }
        else{
            ans++;
        }
        last[as] = i;

    // }
    // for(auto i:last)
    //     cout << i << " ";
    // cout << ans << nl;
    // string s;
    // cin >> s;
    // map<char, ll> m;
    // ll ans = 0;
    // for (char x : s){
    //     if (m[x] == 0){
    //         ans++;
    //         m[x]++;
    //     }
    //     else{
    //         ans--;
    //         m.clear();
    //     }
    // }
    // cout << ans << "\n";
}

int main()
{
    // ios::sync_with_stdio(0);
    freopen("in", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
