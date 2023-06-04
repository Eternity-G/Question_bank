// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const ll MOD = 1e9 + 7;
// ll quickpow(ll a,ll b){//快速幂
//     ll n = 1;
//     while(b){
//         if(b&1)
//             n = n * a % MOD;
//         a = a * a % MOD;
//         b >>= 1;
//     }
//     return n;
// }
// int main(){
//     ios::sync_with_stdio(0);
//     ll t;
//     cin >> t;
//     while(t--){
//         ll x, k, ans = 0, cnt = 0;
//         cin >> x >> k;
//         while(k){
//             if(k&1)
//                 ans += quickpow(x, cnt);
//             k >>= 1;
//             ans %= MOD;
//             cnt++;
//         }
//         cout << ans << endl;
//     }
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        cout << 1 - x << " " << x << endl;
    }
    return 0;
}
