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
    ll n, z;
    cin >> n >> z;
    ll maxa = 0;
    ll x = 0;
    for(int i=0;i<n;i++)
        cin >> x, maxa = max(maxa, x | z), cout << (x | z);
    cout << maxa << nl;
}

int main(){
    //ios::sync_with_stdio(0);
    freopen("in", "r", stdin);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
