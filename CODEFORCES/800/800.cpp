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
    ll a, b;
    cin >> a >> b;
    ll val = min(a, b);
    string ans = "";
    for (int i = 0; i < val; i++)
        ans += "01";
    if(a>b){
        for (int i = 0; i < a - b; i++)
            ans += "0";
        cout << ans << nl;
        return;
    }
    for (int i = 0; i < b - a; i++)
        ans += "1";
    cout << ans << nl;
    return;
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
