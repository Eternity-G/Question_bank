//A
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     ll a, b;
//     cin >> a >> b;
//     if(a==1&&b==1)
//         cout << 0 << endl;
//     else if(a==1||b==1)
//         cout << 1 << endl;
//     else
//         cout << 2 << endl;
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

// //b
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int maxn=1e6+5;
// int qq, n, m, a[maxn], b[maxn];
// bool ans;
// void check(int x){
//     m=0;
//     for (int i = 1; i <= n;i++)
//         if(a[i]!=x)
//             b[++m] = a[i];
//     for (int i = 1; i <= m;i++){
//         if(b[i]!=b[m-i+1])
//             return;
//     }
//     ans = true;
// }
// void solve(){
//     cin >> n;
//     ans = true;
//     for (int i = 1; i <= n;i++){
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n;i++){
//         if(a[i]!=a[n+1-i]){
//             ans = false;
//             check(a[i]);
//             check(a[n + 1 - i]);
//             break;
//         }
//     }
//     if(ans)
//         cout << "Yes\n";
//     else
//         cout << "No\n";
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

//c
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
const int maxn=1e6+5;
ll q, n, a[maxn], b[maxn];
bool ok(ll x){
    ll c = 0;
    for (ll i = 0; i < n;i++){
        if(x-1-a[i]<=c&&c<=b[i])
            c++;
    }
    return c >= x;
}
void solve(){
    cin >> n;
    for (ll i = 0; i < n;i++)
        cin >> a[i] >> b[i];
    ll l = -1, r = n + 1, mid;
    while (l < r - 1) {
        mid = (l + r) >> 1;
        if(ok(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l << endl;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t ;
    while(t--){
         solve();
    }
    return 0;
}

