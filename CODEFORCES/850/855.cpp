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
//     string s;
//     cin >> s;
//     int flag = 1;
//     char a[] = {'m', 'e', 'o', 'w'};
//     char b[] = {'M', 'E', 'O', 'W'};
//     int tag = 0;
//     for (int i = 0; i < n; i++){
//         if(s[i]==a[tag]||s[i]==b[tag]){
//             continue;
//         }else{
//             tag++;
//             if(i>=tag&&tag<4&&(s[i]==a[tag]||s[i]==b[tag])){
//                 continue;
//             }else{
//                 flag = 0;
//                 break;
//             }
//         }
//     }
//     //mmmeeooww
//     if(flag&&tag==3){
//         cout << "YES" << nl;
//     }else{
//         cout << "NO" << nl;
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
const int inf = 0x3f3f3f3f;
const int maxn = 2e5+5;
void solve(){

    int n, k;
    int up[26]{0}, low[26]{0};
    string s;
    cin >> n >> k >> s;

    for(auto c : s) {
        if(islower(c)) {
            low[c - 'a']++;
        } else {
            up[c - 'A']++;
        }
    }

    ll ans = 0;
    for (int i = 0; i < 26; ++i) {
        int com = min(up[i], low[i]);
        ans += com;
        if(k) {
            int t = max(up[i], low[i]) - com;
            int need = min(t / 2, k);
            k -= need;
            ans += need;
        }
        
    }

    cout << ans << endl;
}

int main(){
    //ios::sync_with_stdio(0);
    // freopen("in", "r", stdin);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
